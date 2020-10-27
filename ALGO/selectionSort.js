// https://www.freecodecamp.org/learn/coding-interview-prep/algorithms/implement-selection-sort
function selectionSort(array) {
    // Only change code below this line
    for (let i = 0; i < array.length - 1; i++) {
        for (let j = i; j < array.length; j++) {
            if (array[i] > array[j]) {
                [array[i], array[j]] = [array[j], array[i]];
            }
        }
    }
    return array;
    // Only change code above this line
}

console.log(selectionSort([1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92]));