let blocks = [];
for (let i = 0; i < 11; i++) {
    let number = Math.floor(Math.random(0,6) * 10);
    blocks[i] = number;
}
console.log(blocks);

function bubblesort(array) {
    for (let i = 0; i < array.length; i++) {
        for (let j = 0; j < array.length; j++) {
            if (array[j] > array[j+1]) {
                let temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}


bubblesort(blocks);
console.log(blocks);
