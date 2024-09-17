
# MultithreadedTaskDemo

## Project Overview
This project, created by **Jerry Tan**, demonstrates the use of C++ multithreading capabilities to execute tasks concurrently. It showcases how C++ can efficiently manage threads and synchronization mechanisms like mutexes to ensure thread safety.

## Features
- **Multithreading**: Demonstrates the creation and management of multiple threads using the C++ Standard Library's `std::thread`.
- **Thread Synchronization**: Ensures thread-safe operations using a mutex (`std::mutex`) to prevent race conditions.
- **Task Simulation**: Simulates concurrent tasks with simple output to the console.

## Project Structure
```
MultithreadedTaskDemo/
├── src/
│   └── main.cpp       # C++ source code demonstrating multithreading
├── Makefile           # Makefile for compiling the project
├── .gitignore         # Git ignore file for C++/CLion
└── README.md          # Project documentation
```

## How to Build
You can build the project using either the provided **Makefile** or by manually compiling the code.

### Using Makefile:
1. Open a terminal and navigate to the project directory.
2. Run the following command to build the project:
   ```bash
   make
   ```
3. To clean up the compiled binary, run:
   ```bash
   make clean
   ```

### Manual Compilation:
If you don't want to use the Makefile, you can manually compile the project with the following command:
```bash
g++ src/main.cpp -o MultithreadedTaskDemo -pthread
```

## How to Run
Once compiled, you can run the executable:
```bash
./MultithreadedTaskDemo
```
This will create and run three separate threads, each simulating a task by printing a message to the console.

## Future Enhancements
Here are some potential improvements to the project:
1. **Task Prioritization**: Implement thread prioritization or scheduling to control the execution order of tasks.
2. **Dynamic Thread Pool**: Extend the project to include a thread pool where the number of threads is dynamically managed based on available tasks.
3. **Error Handling**: Add more robust error handling for thread creation and joining.
4. **Task Inputs**: Allow users to pass task-specific data as inputs to the threads for more dynamic behavior.
5. **Benchmarking**: Measure and compare the performance of single-threaded versus multithreaded task execution for large-scale computations.

## License
```
© 2024 Jerry Tan. All Rights Reserved.

This software is the confidential and proprietary information of Jerry Tan ("Confidential Information"). You shall not disclose such Confidential Information and shall use it only in accordance with the terms under which this software was distributed or otherwise published, and solely for the prior express purposes explicitly communicated and agreed upon, and only for those specific permissible purposes.

This software is provided "AS IS," without a warranty of any kind. All express or implied conditions, representations, and warranties, including any implied warranty of merchantability, fitness for a particular purpose, or non-infringement, are disclaimed, except to the extent that such disclaimers are held to be legally invalid.
```

## Author
**Jerry Tan**

A software developer with a passion for creating efficient, concurrent solutions leveraging the power of C++ multithreading and synchronization mechanisms.
