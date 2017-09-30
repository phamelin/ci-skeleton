file(GLOB SKELETON_SOURCES [^.]*.cpp)
file(GLOB SKELETON_PRIVATE_HEADERS [^.]*.h)
file(GLOB SKELETON_PUBLIC_HEADERS ../include/[^.]*.h)

include_directories(../include/)

add_library(skeleton STATIC
            ${SKELETON_SOURCES}
            ${SKELETON_PRIVATE_HEADERS}
            ${SKELETON_PUBLIC_HEADERS})

add_sanitizers(skeleton)

