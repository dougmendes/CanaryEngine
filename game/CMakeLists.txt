add_executable(CanaryGame
	src/main.cpp
)

find_package(glfw3 CONFIG REQUIRED)

target_link_libraries(CanaryGame PRIVATE 
	CanaryEngine
	glfw
)