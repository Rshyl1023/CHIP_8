# CHIP-8 Emulator 👾

A clean, modern, and cross-platform CHIP-8 emulator written in **C++20**. 

This project was built from the ground up as a hands-on dive into **Computer Organization and Architecture**. Rather than just reading about CPU components, this emulator translates abstract hardware theories—such as the **Fetch-Decode-Execute cycle**, program counters, and memory addressing—into working, visual software.

It serves as a perfect bridge between low-level hardware concepts and high-level software engineering, proving that building a "virtual console" is the best way to understand a real one.

## ✨ Key Features

* **Modern C++ Implementation:** Strictly utilizes C++20 features (like `<cstdint>` and modern bitwise operations) for memory safety and elegant opcode parsing.
* **Accurate CPU Emulation:** Faithfully recreates the 4KB memory map, 16 8-bit registers (V0-VF), the system stack, and all 34 core instructions.
* **Cross-Platform Rendering & Input:** Powered by **SDL2** to handle the 64x32 monochrome display rendering and 16-key hex keyboard mapping with minimal overhead.
* **Streamlined Build System:** Configured entirely with **CMake**, making it out-of-the-box ready for modern IDEs like CLion.

## 🛠️ Tech Stack
* **Language:** C++20
* **Graphics & Audio:** SDL2
* **Build Tool:** CMake
