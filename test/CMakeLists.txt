
include_directories(
        ${CPPUNIT_INCLUDE_DIR}
        ${${PROJECT_NAME}_INCLUDE_DIR}
)


SET(project_sources
        AritmeticTests
        main.cpp)

SET(myExe aritTest)

ADD_EXECUTABLE(${myExe} ${project_sources})


target_link_libraries(${myExe}
        aritLib
        ${CPPUNIT_LIBRARY}
        )


IF (USEXUNIT)
    ADD_DEFINITIONS(-DUSEXUNIT)
ENDIF()