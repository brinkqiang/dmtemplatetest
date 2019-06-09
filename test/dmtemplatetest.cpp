
#include "dmtemplate.h"

int main( int argc, char* argv[] ) {

    Idmtemplate* module = dmtemplateGetModule();
    if (module)
    {
        module->Test();
        module->Release();
    }
    return 0;
}
