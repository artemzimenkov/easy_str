#include <iostream>
#include "str_easy.h"

using namespace std;

string itc_hello_str(string name){
    return "Hello, " + name;
}

long long itc_len(string str){
    int idet_po_massivu = 0;
    while(str[idet_po_massivu] != '\0')
        idet_po_massivu++;
        return idet_po_massivu;
}
