cmake_minimum_required(VERSION 3.26)
project(cblas_syrk_test)

# set(BLA_VENDOR OpenBLAS)
# set(CMAKE_PREFIX_PATH "/opt/homebrew/Cellar/openblas/0.3.24")
if (APPLE)
    include_directories("/opt/homebrew/Cellar/openblas/0.3.24/include")
endif (APPLE)
find_package(BLAS REQUIRED)

set(CMAKE_CXX_STANDARD 17)

set(SOURCES main.c)

add_executable(cblas_syrk_test ${SOURCES})

target_link_libraries(cblas_syrk_test PUBLIC BLAS::BLAS)