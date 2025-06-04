#include <opencv2/viz.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

#define POINTSIZE 2.5 // increase to make point cloud points denser

int main(int argc, char** argv)
{
    std::string filename;

    std::cout << "Enter path to PLY file: ";
    std::getline(std::cin, filename);  // Read file path from console

    // Load point cloud with colors
    cv::Mat cloud, colors, norm;
    try 
    {
        cloud = cv::viz::readCloud(filename, colors, norm); // This reads both positions and colors if available
    }
    catch (const cv::Exception& e) // consider generic exception
    {
        std::cerr << "Error loading file: " << e.what() << std::endl;
        return -1;
    }

    if (cloud.empty())
    {
        std::cerr << "Failed to load cloud data from: " << filename << std::endl;
        return -1;
    }

    cv::cvtColor(colors, colors, cv::ColorConversionCodes::COLOR_BGR2RGB);

    // Create a Viz window
    cv::viz::Viz3d window("Colored Point Cloud Viewer");

    // Show the colored point cloud
    cv::viz::WCloud wcloud(cloud, colors);
    window.showWidget("Cloud", wcloud);

    wcloud.setRenderingProperty(cv::viz::POINT_SIZE, POINTSIZE);

    // Main loop
    while (!window.wasStopped())
    {
        window.spinOnce(1, true);
    }

    return 0;
}