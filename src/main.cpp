/*
 * © 2024 Jerry Tan. All Rights Reserved.
 *
 * This software is the confidential and proprietary information of Jerry Tan
 * ("Confidential Information"). You shall not disclose such Confidential Information
 * and shall use it only in accordance with the terms under which this software
 * was distributed or otherwise published, and solely for the prior express purposes
 * explicitly communicated and agreed upon, and only for those specific permissible purposes.
 *
 * This software is provided "AS IS," without a warranty of any kind. All express or implied
 * conditions, representations, and warranties, including any implied warranty of merchantability,
 * fitness for a particular purpose, or non-infringement, are disclaimed, except to the extent
 * that such disclaimers are held to be legally invalid.
 */

// MultithreadedTaskDemo - A C++ project demonstrating the use of threads for task execution

#include <iostream>
#include <thread>
#include <mutex>

// Mutex for thread safety
std::mutex mtx;

// Function to simulate a task
void printTask(int taskNumber) {
    // Lock the mutex to ensure thread-safe output
    std::lock_guard<std::mutex> lock(mtx);
    std::cout << "Task " << taskNumber << " is running." << std::endl;
}

int main() {
    // Create and run multiple threads
    std::thread t1(printTask, 1);
    std::thread t2(printTask, 2);
    std::thread t3(printTask, 3);

    // Wait for threads to complete
    t1.join();
    t2.join();
    t3.join();

    return 0;
}
