/* First Largest */
function GetLargest(arr) {
  let largest = -Infinity;
  for (var i = 0; i < arr.length; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }
  return largest;
}

/* Second Largest */
function GetSecondLargest(arr) {
  let largest = GetLargest(arr);
  let secondLargest = -Infinity;

  for (let i = 0; i < arr.length; i++) {
    if (arr[i] !== largest && arr[i] > secondLargest) {
      secondLargest = arr[i];
    }
  }

  return secondLargest === -Infinity
    ? "No second largest element found."
    : secondLargest;
}

const arr = [1,1,1,1,1,-1];
console.log("Largest:", GetLargest(arr));
console.log("Second Largest:", GetSecondLargest(arr));
