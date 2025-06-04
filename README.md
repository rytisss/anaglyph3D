# 🌈 Point Cloud Viewer using OpenCV Viz

A lightweight C++ application to load and visualize `.ply` point cloud files with color support, using OpenCV's `viz` module with anaglyph support. **Press 3 to switch to anaglyph mode (don't forget your 3D glasses!)**

https://github.com/user-attachments/assets/4df6afbd-590b-40d9-b902-7fd663b84f47

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
git clone https://github.com/rytisss/anaglyph3D.git
cd anaglyph3D
```

### 2. Compile the code

Make sure OpenCV is correctly installed and configured on your system (you can download precompiled MSVC versions [VTK](https://drive.google.com/file/d/1HEUVQ4WsSe-M1uLIcjWU_5Qcr4W7updh/view?usp=sharing) and [OpenCV](https://drive.google.com/file/d/1SLkYkSC-TesMMxo_s_n2fLHV3aiqJw18/view?usp=sharing))

**Linux/macOS:**

```bash
g++ main.cpp -o viewer `pkg-config --cflags --libs opencv4`
```

**Windows (using MSVC):**

Use Visual Studio IDE :)  

> Replace `4xx` with your actual OpenCV version.

### 3. Run the application

**Linux/macOS:**

```bash
./viewer
```

**Windows:**

```cmd
viewer.exe
```

When prompted, enter the full path to a `.ply` file:

```
Enter path to PLY file: /path/to/your/cloud.ply
```

---

## 🗞️ Example

Example data is in *example_data/* folder:  

```bash
Enter path to PLY file: ./example_data/20250429_105703_0.ply
```

---

## 🔧 Configuration

You can adjust the point size rendered in the viewer by changing the `POINTSIZE` macro:

```cpp
#define POINTSIZE 2.5
```

---

## 🧹 Dependencies

* [OpenCV Viz module](https://docs.opencv.org/4.x/d1/d19/group__viz.html)
* [VTK](https://vtk.org/) (required by OpenCV Viz)

or download precompiled [VTK](https://drive.google.com/file/d/1HEUVQ4WsSe-M1uLIcjWU_5Qcr4W7updh/view?usp=sharing) and [OpenCV](https://drive.google.com/file/d/1SLkYkSC-TesMMxo_s_n2fLHV3aiqJw18/view?usp=sharing)

---

## 📄 License

MIT License — feel free to use, modify, and distribute.

---

## 🙇‍♂️ Author

Made by [Lukas Zabulis](https://github.com/lus105) & [Rytis Augustauskas](https://github.com/rytisss)

---

