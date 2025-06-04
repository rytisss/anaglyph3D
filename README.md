# 🌈 Point Cloud Viewer using OpenCV Viz

A lightweight C++ application to load and visualize `.ply` point cloud files with color support, using OpenCV's `viz` module.

---

## 📸 Features

* Loads 3D `.ply` files from user-specified path via console input
* Displays colored point cloud data interactively
* Adjustable point size via macro (`POINTSIZE`)
* Minimal dependency: OpenCV with VTK support

---

## 💪 Requirements

* **OpenCV 4.x** compiled with **VTK** (`viz` module support)
* A C++17 compatible compiler (e.g., `g++`, `clang++`, `MSVC`)
* A `.ply` file with point and color information

---

## 🧑‍💻 Usage

### 1. Clone the repository

```bash
git clone https://github.com/yourusername/pointcloud-viewer-opencv.git
cd pointcloud-viewer-opencv
```

### 2. Compile the code

Make sure OpenCV is correctly installed and configured on your system (you can download precompiled MSVC versions (VTK)[https://drive.google.com/file/d/1HEUVQ4WsSe-M1uLIcjWU_5Qcr4W7updh/view?usp=sharing] and (OpenCV)[https://drive.google.com/file/d/1SLkYkSC-TesMMxo_s_n2fLHV3aiqJw18/view?usp=sharing])

**Linux/macOS:**

```bash
g++ main.cpp -o viewer `pkg-config --cflags --libs opencv4`
```

**Windows (using MSVC):**

```cmd
cl main.cpp /I"path\to\opencv\include" /link /LIBPATH:"path\to\opencv\lib" opencv_world4xx.lib
```

> Replace `4xx` with your actual OpenCV version.

### 3. Run the application

**Linux/macOS:**

**Windows:**

```cmd
viewer.exe
```

```bash
./viewer
```

When prompted, enter the full path to a `.ply` file:

```
Enter path to PLY file: /path/to/your/cloud.ply
```

---

## 🗞️ Example

```bash
Enter path to PLY file: ./example_data/20250429_105703_0.ply
```

![screenshot](https://your-screenshot-url-or-remove-this-line.png)

---

## 🔧 Configuration

You can adjust the point size rendered in the viewer by changing the `POINTSIZE` macro:

```cpp
#define POINTSIZE 2.5
```

---

## 🧹 Dependencies

* [OpenCV Viz module](https://docs.opencv.org/master/d7/dff/tutorial_viz_basics.html)
* [VTK](https://vtk.org/) (required by OpenCV Viz)

or download precompiled (VTK)[https://drive.google.com/file/d/1HEUVQ4WsSe-M1uLIcjWU_5Qcr4W7updh/view?usp=sharing] and (OpenCV)[https://drive.google.com/file/d/1SLkYkSC-TesMMxo_s_n2fLHV3aiqJw18/view?usp=sharing]

---

## 📄 License

MIT License — feel free to use, modify, and distribute.

---

## 🙇‍♂️ Author

Made by [Lukas Zabulis](https://github.com/lus105) & [Rytis Augustauskas](https://github.com/rytisss)

---

