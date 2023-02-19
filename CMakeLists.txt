cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(clionWxWidget)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(wxWidgets_ROOT_DIR C:/wxWidgets-3.2.2.1)
#set(wxWidgets_LIB_DIR C:/wxWidgets-3.2.2.1/lib/gcc_dll)
#set(wxWidgets_CONFIGURATION msw)

# hack for buggy CMake's FindwxWidgets script
if (DEFINED ENV_WX_CONFIG)
    set(ENV{WX_CONFIG} ${ENV_WX_CONFIG})
endif ()

set(wxWidgets_USE_STATIC 1)


set(SRCS main.cpp ui/frame/MainFrame.cpp ui/frame/MainFrame.h ui/component/TabMenuPanel.cpp ui/component/TabMenuPanel.h)

if (APPLE)
    add_executable(main MACOSX_BUNDLE ${SRCS})
    set_target_properties(main PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist)
else ()
    add_executable(main WIN32 ${SRCS})
endif ()
find_package(wxWidgets REQUIRED net core base)
include(${wxWidgets_USE_FILE})
target_link_libraries(main ${wxWidgets_LIBRARIES})
target_include_directories(main PUBLIC ${wxWidgets_INCLUDE_DIRS})