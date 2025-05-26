let userDetails = {
  name: "Amit Gangwar",
  age: 19,
  role: "Js Developer",
  company: "Meta",
  printDetails: function (x, y) {
    // this points to the object
    console.log(x + "+" + y);
  },
};

let anotherUser = {
  name: "John Doe",
  age: 25,
  role: "Backend Developer",
  company: "Google",
};

// call
// userDetails.printDetails.call(anotherUser);

// apply -> similar to call (extra it takes arguments)

userDetails.printDetails.apply(anotherUser, ["Raju", "Raj"]);

// Bind function -> does not execute the function immediately instead it returns and new function
let fun = userDetails.printDetails.bind(anotherUser);

fun();

fun.addEventListener("click", () => {});
