#!/bin/bash
if [[ "$1" = "" ]]; then
    echo Fatal: must specify a dll.
    exit
elif [[ "$1" = "--help" ]] || [[ "$1" = "-h" ]]; then
    echo Usage: ./gen_code.sh dll_name.dll
    echo dll_name.dll should be in "${WINDIR}/System32/"
    echo Requirements: gendef
    exit
fi
dll_path="$(which "$1")"
dll_file="$(basename "${dll_path}")"
dll_name="$(echo "${dll_file}" | cut -d'.' -f1)"
if [[ "${dll_name}" = "" ]]; then
    echo Fatal: dll "$1" not found. Try specifying full dll name with extension.
    exit
fi

gen_header() {
    local count=1
    local dll_exports=( $(gendef - "${dll_path}" | cut -d'=' -f1 | grep -ivP 'LIBRARY|EXPORTS|;') )
    echo "#define DLL_NAME \"${dll_name}\""
    for i in ${dll_exports[@]}; do
        echo "#define ${i} _real_${i}"
    done
    echo "#include \"hijack.h\""
    for i in ${dll_exports[@]}; do
        echo "#undef ${i}"
    done
    echo
    for i in ${dll_exports[@]}; do
        echo "EXPORT ${i}() NOP_FUNC($((count++)));"
    done
}

gen_header > "./${dll_name}.h"
echo "Generated ${dll_name}.h"

cat <<EOF > "./${dll_name}.c"
#include "${dll_name}.h"
#include <winuser.h>

void DLLHijackAttach(bool isSucceed) {
    if (isSucceed)
        MessageBox(NULL, TEXT("DLL Hijack Attach Succeed!"), TEXT(DLL_NAME " DLL Hijack Attach"), MB_OK);
}

void DLLHijackDetach(bool isSucceed) {
    if (isSucceed)
        MessageBox(NULL, TEXT("DLL Hijack Detach Succeed!"), TEXT(DLL_NAME " DLL Hijack Detach"), MB_OK);
}
EOF

echo "Generated ${dll_name}.c"

sed -i "/add_library(${dll_name} SHARED/d" CMakeLists.txt
echo "add_library(${dll_name} SHARED ${dll_name}.c ${dll_name}.h \${SRC})" >> CMakeLists.txt
echo Added "${dll_name}" entry to CMakeLists.txt