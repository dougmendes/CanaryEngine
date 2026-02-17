add_libray(CaranryEngine STATIC
	src/main_engine_dummy.cpp
)

target_include_directories(CanaryEngine PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}/include
)
