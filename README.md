# CanaryEngine

**CanaryEngine** is a long-term educational and technical project focused on building a modern C++ game engine from scratch using professional workflows, architecture, and tooling inspired by AAA development practices.

This repository serves both as:

* a **learning platform** for advanced systems programming and graphics engineering
* a **technical playground** to explore engine architecture, rendering pipelines, and performance-oriented design

The project emphasizes understanding **how engines work internally**, rather than relying on existing game frameworks.

---

# 🎯 Vision

The goal of CanaryEngine is not to immediately compete with production engines like Unreal or Unity.

Instead, the project focuses on:

* Building a **clean, extensible engine architecture**
* Understanding modern graphics pipelines
* Practicing professional C++ workflows
* Developing a strong technical foundation aligned with AAA engine programming

CanaryEngine will evolve incrementally through clearly defined phases.

---

# 🧱 Tech Stack

## Core Technology

* **Language:** C++20
* **IDE:** Visual Studio Community
* **Build System:** CMake (Modern CMake workflow)
* **Package Manager:** vcpkg

## Engine Components

* **Platform Layer:** GLFW
* **Graphics API:** DirectX 12 (initial backend)
* **Shader Language:** HLSL
* **Math Library:** glm
* **Logging:** spdlog
* **Debug UI:** Dear ImGui

---

# 🏗️ Architecture Overview

CanaryEngine follows a layered architecture similar to modern AAA engines.

```
Game Layer
     ↓
Engine Systems
     ↓
Renderer / Platform Abstraction
     ↓
DirectX12 / OS
```

## Engine Modules

### Core

Low-level utilities:

* Logging
* Memory concepts
* Time systems
* Common abstractions

### Platform

System interaction:

* Window creation
* Input handling
* OS abstraction

### Render

Graphics systems:

* Renderer backend
* Pipeline setup
* Shader management

### Assets

Resource management:

* Asset loading
* Data preparation
* Future streaming systems

---

# 📂 Repository Structure

```
CanaryEngine/
│
├── engine/
│   ├── include/Canary/
│   └── src/
│
├── game/
│   └── src/
│
├── shaders/
│
├── CMakeLists.txt
├── CMakePresets.json
└── vcpkg.json
```

---

# 🚀 Development Roadmap

## Phase 1 — Foundation 

* [x] Repository setup
* [x] CMake project structure
* [x] vcpkg integration
* [x] Engine static library
* [x] Example executable

## Phase 2 — Platform Layer (Current)

* [ ] GLFW window creation
* [ ] Main loop architecture
* [ ] Basic input handling

## Phase 3 — Rendering Bootstrap

* [ ] DirectX12 initialization
* [ ] Swapchain creation
* [ ] Clear screen rendering
* [ ] Shader compilation pipeline

## Phase 4 — Core Engine Systems

* [ ] Camera system
* [ ] Transform system
* [ ] Frame timing
* [ ] Basic asset loading

## Phase 5 — Tooling & Debugging

* [ ] Dear ImGui integration
* [ ] Runtime debug overlay
* [ ] Logging improvements

## Phase 6 — Advanced Architecture (Long Term)

* [ ] Render abstraction layer (future Vulkan support)
* [ ] Job system / multithreading
* [ ] Resource management pipeline
* [ ] Memory strategies

---

# 🧠 Engineering Principles

CanaryEngine is built around the following philosophy:

* **Incremental complexity** — build small, understand deeply
* **Modern CMake practices**
* **Data-oriented thinking**
* Avoid premature optimization
* Learn by implementing systems, not copying frameworks

---

# 🛠️ Build Instructions (Windows)

## Requirements

* Visual Studio Community 2022
  Workload: *Desktop development with C++*
* vcpkg installed locally
* CMake (bundled with Visual Studio)

---

## Clone Repository

```
git clone https://github.com/<your-user>/CanaryEngine.git
cd CanaryEngine
```

---

## Open in Visual Studio

1. Open Visual Studio
2. **File → Open → Folder**
3. Select the `CanaryEngine` root directory
4. Click **Configure CMake**
5. Build using **Build → Build All**

---

## Command Line Build (Optional)

```
cmake --preset vs-debug
cmake --build --preset vs-debug
```

---

# 🎮 Engine vs Game Layer

The `engine/` folder contains reusable engine code.

The `game/` folder represents a lightweight application layer that consumes the engine.

This separation mirrors real-world engine development workflows.

---

# 📚 Learning References

This project is influenced by:

* *Game Engine Architecture* — Jason Gregory
* Modern CMake best practices
* Industry rendering pipelines and engine design patterns

---

# ⚠️ Project Status

CanaryEngine is an **ongoing learning project**.
Expect frequent refactors as architecture evolves.

---

# 📜 License

MIT License

---

# 🤝 Contribution

This project is primarily educational, but ideas and discussions are welcome.

---
