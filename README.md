# C++ Welcome Game

A beginner-friendly C++ game built with **SFML 3.0.2** to demonstrate game window creation, rendering, and event handling.

## 📋 Overview

This project is a simple yet complete example of a C++ game application that displays a welcome screen. It serves as an educational resource for learning:
- Modern C++ (C++17)
- SFML graphics library setup and usage
- CMake project configuration
- Game loop implementation
- Event handling in game applications

### Features

- **Game Window**: 800x600 resolution window with custom title
- **Text Rendering**: Displays welcome message and instructions using custom fonts
- **Event Handling**: Responsive to window close events
- **Frame Rate Control**: Fixed 60 FPS for consistent gameplay
- **Cross-Platform**: Configured for Windows with extensible CMake setup

## 🎮 Screenshot & Behavior

The application displays:
1. **Welcome Message**: "Welcome to C++ Game Programming!" in white text
2. **Instruction Text**: "Close the window to exit." in light blue text
3. **Dark Blue Background**: Professional-looking dark blue color scheme
4. Runs at 60 FPS with clean event handling

## 🛠️ Technology Stack

- **Language**: C++17
- **Graphics Library**: [SFML](https://www.sfml-dev.org/) 3.0.2
- **Build System**: CMake 3.28+
- **Platform**: Windows (primary), cross-platform capable
- **Compiler**: MSVC (via Ninja generator)

## 📁 Project Structure

```
Cpp_WelcomeGame/
├── src/
│   └── main.cpp           # Main application entry point
├── assets/
│   └── fonts/
│       └── welcome.ttf    # Font file for text rendering
├── CMakeLists.txt         # CMake build configuration
├── CMakePresets.json      # Build presets for Windows
├── .gitignore             # Git ignore rules
└── .gitattributes         # Git attributes configuration
```

## 🚀 Getting Started

### Prerequisites

- **CMake** 3.28 or later
- **C++17** compatible compiler (MSVC recommended for Windows)
- **Ninja** build system (configured in CMakePresets.json)
- Internet connection (SFML is downloaded automatically)

### Building

1. **Clone the repository**
   ```bash
   git clone https://github.com/liewvk/Cpp_WelcomeGame.git
   cd Cpp_WelcomeGame
   ```

2. **Configure the project** (using CMake presets)
   ```bash
   cmake --preset windows-debug
   ```

3. **Build the project**
   ```bash
   cmake --build out/build/windows-debug --preset windows-debug-build
   ```

4. **Run the application**
   ```bash
   ./out/build/windows-debug/bin/WelcomeGame.exe
   ```

### Manual CMake Build (Alternative)

```bash
cmake -B build -G "Ninja"
cmake --build build
./build/bin/WelcomeGame.exe
```

## 📝 Code Overview

### Main Application Logic (`src/main.cpp`)

The application follows a standard game loop pattern:

```cpp
// 1. Asset Loading
// - Loads font from GAME_ASSET_DIR macro

// 2. Window Creation
// - Creates 800x600 window with titlebar and close button
// - Sets frame rate limit to 60 FPS

// 3. Text Setup
// - Creates two text objects (welcome message and instructions)
// - Configures font, size, color, and position

// 4. Game Loop
while (window.isOpen())
{
    // Handle events (window close)
    // Clear screen with dark blue background
    // Draw text elements
    // Display frame
}
```

## 🔧 Build Configuration

### CMakeLists.txt Highlights

- **SFML Optimization**: Only Graphics module is built (Audio, Network disabled)
- **C++ Standard**: C++17 with no compiler extensions
- **Asset Directory**: Compiled as preprocessor definition for reliable asset access
- **Output Directory**: Binaries placed in `${CMAKE_BINARY_DIR}/bin`

### CMakePresets.json

Provides a preset for Windows development:
- **Generator**: Ninja (fast parallel builds)
- **Architecture**: x64
- **Build Type**: Debug (development-friendly)
- **Output**: `out/build/windows-debug/`

## 🎓 Learning Resources

This project demonstrates:

1. **Modern C++ Practices**
   - STL filesystem for path handling
   - Smart use of SFML API
   - Proper error handling

2. **Game Development Concepts**
   - Game loop pattern
   - Event-driven architecture
   - Frame rate management
   - Resource management (window, font)

3. **CMake Best Practices**
   - FetchContent for dependency management
   - Target-based configuration
   - Preset-based build workflow

## 📋 Requirements

### Font Asset

Ensure a font file exists at:
```
assets/fonts/welcome.ttf
```

The application will gracefully exit with an error message if the font cannot be loaded.

## ⚙️ Customization

### Change Window Size
In `CMakeLists.txt`, modify the project name and in `src/main.cpp`:
```cpp
sf::RenderWindow window(
    sf::VideoMode({WIDTH, HEIGHT}),  // Change 800, 600 here
    "Your Title"
);
```

### Modify Text Content
Edit the `setString()` calls in `src/main.cpp`:
```cpp
welcome.setString("Your custom message");
```

### Adjust Colors
Change the RGB values in `sf::Color()`:
```cpp
sf::Color(R, G, B)  // RGB values (0-255)
```

## 🐛 Troubleshooting

| Issue | Solution |
|-------|----------|
| Font not found | Ensure `assets/fonts/welcome.ttf` exists in the correct location |
| CMake configuration fails | Update CMake to 3.28+ |
| Build fails with compiler errors | Install Visual Studio build tools or MSVC compiler |
| SFML download fails | Check internet connection and firewall settings |

## 📄 License

This project is provided as an educational example. Check the repository for any specific license information.

## 🤝 Contributing

Contributions, issues, and feature requests are welcome! Feel free to:
- Report bugs
- Suggest improvements
- Submit pull requests

## 👤 Author

**liewvk** - [GitHub Profile](https://github.com/liewvk)

---

**Happy Coding! 🎮✨**
