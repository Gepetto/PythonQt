option(PythonQt_Extensions "Build PythonQt extensions." OFF)

if(PythonQt_Extensions)
  set(qtall_headers
    PythonQt_QtAll/PythonQt_QtAll.h)

  set(qtall_sources
    PythonQt_QtAll/PythonQt_QtAll.cpp)

  foreach(qtlib ${qtlibs})
    set(qt_wrapped_lib ${qtlib_to_wraplib_${qtlib}})
    if(${PythonQt_Wrap_Qt${qt_wrapped_lib}})
      add_definitions("-D${PythonQt_Wrap_Qt${qt_wrapped_lib}}")
    endif()
  endforeach()

  include_directories(generated_cpp${generated_cpp_suffix})

  add_library(PythonQt_QtAll SHARED ${qtall_sources})
  target_link_libraries(PythonQt_QtAll PythonQt)

  install(TARGETS PythonQt_QtAll
    RUNTIME DESTINATION ${PythonQt_INSTALL_RUNTIME_DIR}
    LIBRARY DESTINATION ${PythonQt_INSTALL_LIBRARY_DIR}
    ARCHIVE DESTINATION ${PythonQt_INSTALL_ARCHIVE_DIR})
  install(FILES ${qtall_headers} DESTINATION ${PythonQt_INSTALL_INCLUDE_DIR})
endif()
