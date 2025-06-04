cmake_minimum_required(VERSION 3.10)
project(anaglyph3d)

# opencv
file(TO_CMAKE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../3rdParty/opencv-4.11.0/ opencv_path) # point from build directory to 3rdParty

# vtk
file(TO_CMAKE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/../3rdParty/VTK-9.4.2/ vtk_path) # point from build directory to 3rdParty

find_package(OpenCV REQUIRED viz imgproc)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE ${OpenCV_LIBS})

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${opencv_path}//x64//vc17//bin//$<$<CONFIG:debug>:opencv_core4110d.dll>$<$<CONFIG:release>:opencv_core4110.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${opencv_path}//x64//vc17//bin//$<$<CONFIG:debug>:opencv_viz4110d.dll>$<$<CONFIG:release>:opencv_viz4110.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${opencv_path}//x64//vc17//bin//$<$<CONFIG:debug>:opencv_imgproc4110d.dll>$<$<CONFIG:release>:opencv_imgproc4110.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)


add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersTexture-9.4d.dll>$<$<CONFIG:release>:vtkFiltersTexture-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkIOExport-9.4d.dll>$<$<CONFIG:release>:vtkIOExport-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkIOGeometry-9.4d.dll>$<$<CONFIG:release>:vtkIOGeometry-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkIOPLY-9.4d.dll>$<$<CONFIG:release>:vtkIOPLY-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkInteractionStyle-9.4d.dll>$<$<CONFIG:release>:vtkInteractionStyle-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkRenderingLOD-9.4d.dll>$<$<CONFIG:release>:vtkRenderingLOD-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkRenderingOpenGL2-9.4d.dll>$<$<CONFIG:release>:vtkRenderingOpenGL2-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkRenderingFreeType-9.4d.dll>$<$<CONFIG:release>:vtkRenderingFreeType-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkIOCore-9.4d.dll>$<$<CONFIG:release>:vtkIOCore-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkImagingCore-9.4d.dll>$<$<CONFIG:release>:vtkImagingCore-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkRenderingCore-9.4d.dll>$<$<CONFIG:release>:vtkRenderingCore-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersSources-9.4d.dll>$<$<CONFIG:release>:vtkFiltersSources-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersGeneric-9.4d.dll>$<$<CONFIG:release>:vtkFiltersGeneric-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersGeneral-9.4d.dll>$<$<CONFIG:release>:vtkFiltersGeneral-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersCore-9.4d.dll>$<$<CONFIG:release>:vtkFiltersCore-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkCommonExecutionModel-9.4d.dll>$<$<CONFIG:release>:vtkCommonExecutionModel-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkCommonDataModel-9.4d.dll>$<$<CONFIG:release>:vtkCommonDataModel-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkCommonTransforms-9.4d.dll>$<$<CONFIG:release>:vtkCommonTransforms-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkCommonMath-9.4d.dll>$<$<CONFIG:release>:vtkCommonMath-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkCommonCore-9.4d.dll>$<$<CONFIG:release>:vtkCommonCore-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtksys-9.4d.dll>$<$<CONFIG:release>:vtksys-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkIOXML-9.4d.dll>$<$<CONFIG:release>:vtkIOXML-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkRenderingContext2D-9.4d.dll>$<$<CONFIG:release>:vtkRenderingContext2D-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkRenderingVtkJS-9.4d.dll>$<$<CONFIG:release>:vtkRenderingVtkJS-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkDomainsChemistry-9.4d.dll>$<$<CONFIG:release>:vtkDomainsChemistry-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkRenderingSceneGraph-9.4d.dll>$<$<CONFIG:release>:vtkRenderingSceneGraph-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkjsoncpp-9.4d.dll>$<$<CONFIG:release>:vtkjsoncpp-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersGeometry-9.4d.dll>$<$<CONFIG:release>:vtkFiltersGeometry-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersHybrid-9.4d.dll>$<$<CONFIG:release>:vtkFiltersHybrid-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersVerdict-9.4d.dll>$<$<CONFIG:release>:vtkFiltersVerdict-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkCommonSystem-9.4d.dll>$<$<CONFIG:release>:vtkCommonSystem-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkzlib-9.4d.dll>$<$<CONFIG:release>:vtkzlib-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkCommonMisc-9.4d.dll>$<$<CONFIG:release>:vtkCommonMisc-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersModeling-9.4d.dll>$<$<CONFIG:release>:vtkFiltersModeling-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkRenderingHyperTreeGrid-9.4d.dll>$<$<CONFIG:release>:vtkRenderingHyperTreeGrid-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkRenderingUI-9.4d.dll>$<$<CONFIG:release>:vtkRenderingUI-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkglad-9.4d.dll>$<$<CONFIG:release>:vtkglad-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkIOImage-9.4d.dll>$<$<CONFIG:release>:vtkIOImage-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkCommonColor-9.4d.dll>$<$<CONFIG:release>:vtkCommonColor-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkfreetype-9.4d.dll>$<$<CONFIG:release>:vtkfreetype-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtklz4-9.4d.dll>$<$<CONFIG:release>:vtklz4-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtklzma-9.4d.dll>$<$<CONFIG:release>:vtklzma-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkDICOMParser-9.4d.dll>$<$<CONFIG:release>:vtkDICOMParser-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkmetaio-9.4d.dll>$<$<CONFIG:release>:vtkmetaio-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkpng-9.4d.dll>$<$<CONFIG:release>:vtkpng-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtktiff-9.4d.dll>$<$<CONFIG:release>:vtktiff-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkpugixml-9.4d.dll>$<$<CONFIG:release>:vtkpugixml-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtktoken-9.4d.dll>$<$<CONFIG:release>:vtktoken-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkjpeg-9.4d.dll>$<$<CONFIG:release>:vtkjpeg-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkCommonComputationalGeometry-9.4d.dll>$<$<CONFIG:release>:vtkCommonComputationalGeometry-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkfmt-9.4d.dll>$<$<CONFIG:release>:vtkfmt-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersReduction-9.4d.dll>$<$<CONFIG:release>:vtkFiltersReduction-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkkissfft-9.4d.dll>$<$<CONFIG:release>:vtkkissfft-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkdoubleconversion-9.4d.dll>$<$<CONFIG:release>:vtkdoubleconversion-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkloguru-9.4d.dll>$<$<CONFIG:release>:vtkloguru-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkIOXMLParser-9.4d.dll>$<$<CONFIG:release>:vtkIOXMLParser-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkImagingSources-9.4d.dll>$<$<CONFIG:release>:vtkImagingSources-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkverdict-9.4d.dll>$<$<CONFIG:release>:vtkverdict-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkFiltersHyperTree-9.4d.dll>$<$<CONFIG:release>:vtkFiltersHyperTree-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} ARGS -E copy_if_different
    ${vtk_path}//bin//$<$<CONFIG:debug>:vtkexpat-9.4d.dll>$<$<CONFIG:release>:vtkexpat-9.4.dll>
    $<TARGET_FILE_DIR:${PROJECT_NAME}>)