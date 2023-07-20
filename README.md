### Build

$ colcon build


### Run Tests

$ colcon test

$ colcon test-result --all --verbose

$ colcon test --ctest-args --packages-select gtest_demo

$ colcon test --ctest-args --packages-select catch2_demo

$ colcon test --ctest-args --packages-select catch2_submodule_demo

$ colcon test --event-handlers console_direct+ --packages-select gtest_demo

$ colcon test --event-handlers console_direct+ --packages-select catch2_demo

$ colcon test --event-handlers console_direct+ --packages-select catch2_submodule_demo

