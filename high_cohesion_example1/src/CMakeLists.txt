include_directories(${CMAKE_SOURCE_DIR}/include)
add_library(emp_name employer_name.cpp)
add_library(emp_age employer_age.cpp)
add_library(emp_num employer_contact_number.cpp)

add_executable(main main.cpp)
target_link_libraries(main emp_name emp_age emp_num)
