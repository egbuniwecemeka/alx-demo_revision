class Task {
    description;
    completed;
    constructor(description) {
        this.description = description;
        this.completed;
    }

    completeTask() {
        this.completed = true;
    }
}

let tasks = [];

function addTask() {
    const newTask = new Task(description);
    tasks.push(newTask);
}

function markTask(index) {
    tasks[index].completeTask();
}

function displayTasks() {
    tasks.forEach((task, index) => {
        console.log(`${index}: ${task.description} - ${task.completed ? 'Completed': 'Incomplete'}`);
    })
}

addTask("Complete JS basics");

displayTasks();

markTask(0);

displayTasks();
