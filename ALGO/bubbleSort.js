// https://www.freecodecamp.org/learn/coding-interview-prep/algorithms/implement-selection-sort
function bubbleSort(array) {
    // Only change code below this line
    for (let i = 0; i < array.length - 1; i++) {
        for (let j = 0; j < array.length - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                // const temp = array[j];
                // array[j] = array[j + 1];
                // array[j + 1] = temp;
                [array[j], array[j + 1]] = [array[j + 1], array[j]];
            }
        }
    }
    return array;
}

console.log(bubbleSort([1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92]));