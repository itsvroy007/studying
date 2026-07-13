    const todoList=[];

function handleKeyDown(event) {
    if (event.key === 'Enter') {
        addTask();
    }
}
function addTask(){
    const inputElem = document.querySelector('.js-nameInput');
    const name = inputElem.value;

    const dateElem =document.querySelector('.js-date');
    const dueDate = dateElem.value;

    // Validation: Check if name AND date are provided
    if (!name || !dueDate) {
        alert("Please enter both a task name and a date!");
        return; // Exit function early
    }

    todoList.push({
        name: name, // since property and item name is same we can just type it out ince
        dueDate
        completed: false
    });
        // todoList.push(name);
        console.log(todoList);
        inputElem.value = '';
        saveAndRender();
        
    }

function saveAndRender() {
            localStorage.setItem('todoList', JSON.stringify(todoList));
            renderTodoList();
    }
function renderTodoList(){
    let todoListHTML = '';
        for(let i = 0;i<todoList.length;i++){
                const todo = todoList[i];
                const {name , dueDate,completed} = todo;
                const html = `
                        <input type="checkbox" ${completed ? 'checked' : ''} 
                        onclick="toggleComplete(${i})">
                        <div>${name}</div>
                        <div>${dueDate}</div>
                        <button class = "deleteButton" onclick='
                        todoList.splice(${i},1);
                        
                        saveAndRender(); 
                        '>Delete</button>`;
                        todoListHTML +=html;
        }
        //console.log(todoListHTML);
        document.querySelector('.js-todo-List')
            .innerHTML = todoListHTML;
    }

function toggleComplete(index) {
    todoList[index].completed = !todoList[index].completed;
    saveAndRender();
}

