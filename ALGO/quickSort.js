function quickSort(array) {
    if (array.length === 1) {
        return array;
    }
    const leftArray = [];
    const rightArray = [];
    const pivot = array[array.length - 1];
    for (const el of array.slice(0, array.length - 1)) {
        el > pivot ? rightArray.push(el) : leftArray.push(el);
    }

    if (leftArray.length > 0 && rightArray.length > 0) {
        return [...quickSort(leftArray), pivot, ...quickSort(rightArray)];
    } else if (leftArray.length > 0) {
        return [...quickSort(leftArray), pivot];
    } else {
        return [pivot, ...quickSort(rightArray)];

    }
}
const arr = [1, 4, 2, 8, 345, 123, 43, 32, 5643, 63, 123, 43, 2, 55, 1, 234, 92];
console.log(quickSort(arr));