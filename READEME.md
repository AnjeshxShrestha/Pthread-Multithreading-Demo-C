# 🧵 POSIX Multithreading System Simulation in C

This project demonstrates how to create and manage multiple threads using **POSIX pthreads** in C.  
Each thread simulates a separate system-level task such as file system operations, printing, networking, database handling, and logging.

---

## 📌 Features
- ✔️ Uses POSIX `pthread_create` and `pthread_join`
- ✔️ Simulates **5 independent system tasks**
- ✔️ Clean, beginner-friendly structure
- ✔️ Shows parallel execution behavior
- ✔️ Cross-platform on any POSIX-compliant system (Linux, Unix, etc.)

---

## 🧠 Threads Included
Each thread represents a real system component:

| Thread Name         | Description                                |
|---------------------|---------------------------------------------|
| File System Thread  | Simulates file storage operations           |
| Printing Thread     | Represents printer job execution            |
| Network Thread      | Simulates network communication handling    |
| Database Thread     | Simulates DB read/write operations          |
| Logging Thread      | Represents system/application logging       |

---

## 📂 File
- **main.c** (or whatever filename you use)

---

## ▶️ How to Compile & Run

### **Compile**
```bash
gcc main.c -o thread_sim -pthread

Run

./thread_sim

📊 Sample Output

File system thread is running...
Printing thread is running...
Network thread is running...
Database thread is running...
Logging thread is running...
File system thread finished.
Printing thread finished.
Network thread finished.
Database thread finished.
Logging thread finished.
All threads have finished execution.

📝 Notes

    All threads run concurrently, but order of execution may vary due to scheduler behavior.

    sleep(1) is only used to simulate processing time.

    Code is meant for learning POSIX threading basics.

🎯 Purpose

Ideal for:

    OS / Multithreading assignments

    Understanding pthread basics

    Demonstrating concurrent execution in C

    Portfolio mini-projects

📜 License

Free to use and modify.
