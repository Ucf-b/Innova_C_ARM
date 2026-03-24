# ------------------- Required for MSVC nmake ---------------------------------
# This file should be included at the top of a MAKEFILE as follows:


CPU = AMD64

MODEL     = Modele_3D
TARGET      = sfun
MODULE_SRCS   = c2_Modele_3D.c half_type.c
MODEL_SRC  = Modele_3D_sfun.c
MODEL_REG = Modele_3D_sfun_registry.c
MAKEFILE    = Modele_3D_sfun.mak
MATLAB_ROOT  = C:\Program Files\MATLAB\R2024b
BUILDARGS   =

#--------------------------- Tool Specifications ------------------------------
#
#
MSVC_ROOT1 = $(MSDEVDIR:SharedIDE=vc)
MSVC_ROOT2 = $(MSVC_ROOT1:SHAREDIDE=vc)
MSVC_ROOT  = $(MSVC_ROOT2:sharedide=vc)

# Compiler tool locations, CC, LD, LIBCMD:
CC     = cl.exe
LD     = link.exe
LIBCMD = lib.exe
#------------------------------ Include/Lib Path ------------------------------

USER_INCLUDES   =  /I "C:\Users\youss\Desktop\Trajectoire_Sujet1\Module_3D_Simulink"
AUX_INCLUDES   = 
MLSLSF_INCLUDES = \
    /I "C:\Program Files\MATLAB\R2024b\extern\include" \
    /I "C:\Program Files\MATLAB\R2024b\simulink\include" \
    /I "C:\Program Files\MATLAB\R2024b\simulink\include\sf_runtime" \
    /I "C:\Program Files\MATLAB\R2024b\stateflow\c\mex\include" \
    /I "C:\Program Files\MATLAB\R2024b\rtw\c\src" \
    /I "C:\Users\youss\Desktop\Trajectoire_Sujet1\Module_3D_Simulink\slprj\_sfprj\Modele_3D\_self\sfun\src" 

COMPILER_INCLUDES = /I "$(MSVC_ROOT)\include"

THIRD_PARTY_INCLUDES   =  /I "C:\Program Files\MATLAB\R2024b\extern\include\shared_robotics" /I "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src" /I "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd"
INCLUDE_PATH = $(USER_INCLUDES) $(AUX_INCLUDES) $(MLSLSF_INCLUDES)\
 $(THIRD_PARTY_INCLUDES)
LIB_PATH     = "$(MSVC_ROOT)\lib"

CFLAGS = /c /Zp8 /GR /W3 /EHs /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /D_SECURE_SCL=0 /DMX_COMPAT_64 /DMATLAB_MEXCMD_RELEASE=R2018a /DMATLAB_MEX_FILE /nologo /MD  -Dccd_EXPORTS
LDFLAGS = /nologo /dll /MANIFEST /OPT:NOREF /export:mexFunction /export:mexfilerequiredapiversion  
#----------------------------- Source Files -----------------------------------

REQ_SRCS  =  $(MODEL_SRC) $(MODEL_REG) $(MODULE_SRCS)

USER_OBJS =

AUX_ABS_OBJS =

THIRD_PARTY_OBJS     = \
     "c_mexapi_version.obj" \
     "ccd_ccd.obj" \
     "ccd_mpr.obj" \
     "ccd_polytope.obj" \
     "ccd_vec3.obj" \
     "collisioncodegen_CollisionGeometry.obj" \
     "collisioncodegen_api.obj" \
     "collisioncodegen_ccdExtensions.obj" \
     "collisioncodegen_checkCollision.obj" \

REQ_OBJS = $(REQ_SRCS:.cpp=.obj)
REQ_OBJS2 = $(REQ_OBJS:.c=.obj)
OBJS = $(REQ_OBJS2) $(USER_OBJS) $(AUX_ABS_OBJS) $(THIRD_PARTY_OBJS)
OBJLIST_FILE = Modele_3D_sfun.mol
SFCLIB = 
AUX_LNK_OBJS =     
USER_LIBS = 
#--------------------------------- Rules --------------------------------------

MEX_FILE_NAME_WO_EXT = $(MODEL)_$(TARGET)
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexw64
MEX_FILE_CSF =
all : $(MEX_FILE_NAME) $(MEX_FILE_CSF)

$(MEX_FILE_NAME) : $(MAKEFILE) $(OBJS) $(SFCLIB) $(AUX_LNK_OBJS) $(USER_LIBS) $(THIRD_PARTY_LIBS)
 @echo ### Linking ...
 $(LD) $(LDFLAGS) /OUT:$(MEX_FILE_NAME) /map:"$(MEX_FILE_NAME_WO_EXT).map"\
  $(USER_LIBS) $(SFCLIB) $(AUX_LNK_OBJS)\
  $(DSP_LIBS) $(THIRD_PARTY_LIBS)\
  @$(OBJLIST_FILE)
	@echo ### Created $@

.c.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"

.cpp.obj :
	@echo ### Compiling "$<"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "$<"


c_mexapi_version.obj :  "C:\Program Files\MATLAB\R2024b\extern\version\c_mexapi_version.c"
	@echo ### Compiling "C:\Program Files\MATLAB\R2024b\extern\version\c_mexapi_version.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2024b\extern\version\c_mexapi_version.c"
ccd_ccd.obj :  "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_ccd.c"
	@echo ### Compiling "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_ccd.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_ccd.c"
ccd_mpr.obj :  "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_mpr.c"
	@echo ### Compiling "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_mpr.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_mpr.c"
ccd_polytope.obj :  "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_polytope.c"
	@echo ### Compiling "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_polytope.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_polytope.c"
ccd_vec3.obj :  "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_vec3.c"
	@echo ### Compiling "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_vec3.c"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\externalDependency\libccd\src\ccd_vec3.c"
collisioncodegen_CollisionGeometry.obj :  "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_CollisionGeometry.cpp"
	@echo ### Compiling "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_CollisionGeometry.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_CollisionGeometry.cpp"
collisioncodegen_api.obj :  "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_api.cpp"
	@echo ### Compiling "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_api.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_api.cpp"
collisioncodegen_ccdExtensions.obj :  "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_ccdExtensions.cpp"
	@echo ### Compiling "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_ccdExtensions.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_ccdExtensions.cpp"
collisioncodegen_checkCollision.obj :  "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_checkCollision.cpp"
	@echo ### Compiling "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_checkCollision.cpp"
	$(CC) $(CFLAGS) $(INCLUDE_PATH) "C:\Program Files\MATLAB\R2024b\toolbox\shared\robotics\robotcore\builtins\libsrc\collisioncodegen\collisioncodegen_checkCollision.cpp"
