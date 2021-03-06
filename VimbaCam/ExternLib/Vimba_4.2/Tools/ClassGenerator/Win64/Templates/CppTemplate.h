/*=============================================================================
This file was generated by the VimbaClassGenerator
=============================================================================*/

#ifndef ### HEADER_FILE_MACRO_NAME ###
#define ### HEADER_FILE_MACRO_NAME ###

#include "VimbaCPP/Include/VimbaCPP.h"

class ### CLASS_NAME ### : public AVT::VmbAPI::Camera
{
    public:
        typedef SP_DECL( ### CLASS_NAME ### ) Ptr;

        ### ENUM_DECLARATIONS ###
        
        ### CLASS_NAME ### (
            const char         *pCameraID,
            const char         *pCameraName,
            const char         *pCameraModel,
            const char         *pCameraSerialNumber,
            const char         *pInterfaceID,
            VmbInterfaceType    interfaceType,
            const char         *pInterfaceName,
            const char         *pInterfaceSerialNumber,
            VmbAccessModeType   interfacePermittedAccess );

        ### METHOD_DECLARATIONS ###

    private:
        ### VARIABLE_DECLARATIONS ###
};

#endif