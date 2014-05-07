#define MAJOR_VERSION 3
#define MINOR_VERSION 2
#define BUILD_VERSION 6
#define BUILD_REVISION 47507

#define STRINGIFY(x) #x
#define MACRO_STRINGIFY(x) STRINGIFY(x)

#define REVISION_STRING MACRO_STRINGIFY(BUILD_REVISION)
#define VERSION_STRING MACRO_STRINGIFY(MAJOR_VERSION) "." MACRO_STRINGIFY(MINOR_VERSION) "." MACRO_STRINGIFY(BUILD_VERSION) "." MACRO_STRINGIFY(BUILD_REVISION)
