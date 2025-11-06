'use strict';
// const Person = function (firstName, birthyear) {
//   this.firstName = firstName;
//   this.birthyear = birthyear;
// };

// const jonas = new Person('jonas', 1991);
// console.log(jonas);

// Person.prototype.sayHello = function () {
//   console.log('helloo');
// };
// jonas.sayHello();

// Person.prototype.gotra = 'Luhar';

// console.log(jonas.gotra);

// class PersonCL {
//   constructor(firstName, birthYear) {
//     this.firstName = firstName;
//     this.birthYear = birthYear;
//   }
//   calcAge() {
//     console.log(2025 - this.birthYear);
//   }
// }

// const meet = new PersonCL('Meet', 2002);
// meet.calcAge();

// PersonCL.prototype.greet = function () {
//   console.log(`Heyy ${this.firstName}, hows going buddy`);
// };

// meet.greet();

// getter and setters

// const account = {
//   owner: 'meet',
//   movements: [200, 530, 120, 20],

//   get latest() {
//     return this.movements.slice(-1).pop();
//   },
// };
// console.log(account.latest);

// const PersonProto = {
//   clacAge() {
//     console.log(2025 - this.birthYear);
//   },
// };

// const steven = Object.create(PersonProto);
// steven.name = 'Steven';
// steven.birthYear = 2002;
// steven.clacAge();

// const Person = function (firstName, birthYear) {
//   this.firstName = firstName;
//   this.birthYear = birthYear;
// };

// Person.prototype.calcAge = function () {
//   console.log(2025 - this.birthYear);
// };

// const Student = function (firstName, birthYear, course) {
//   // this.firstName = firstName;
//   // this.birthYear = birthYear;
//   Person.call(this, firstName, birthYear);
//   this.course = course;
// };

// Student.prototype.introduce = function () {
//   console.log(
//     `Hello guys, my name is ${this.firstName} and im ${this.birthYear} years old, studying ${this.course}`
//   );
// };

// const meet = new Student('Meet', 2002, 'Coumputer Science');
// console.log(meet);

// meet.introduce();

// const PersonProtoType = {
//   calcAge() {
//     console.log(2025 - this.birthDay);
//   },
// };

// const meetM = Object.create(PersonProtoType);
// meetM.birthDay = 2002;
// meetM.calcAge();

// class expression
// const PersonCL = class {}

// // class declaration
// class PersonCL {
//   constructor(firstName, birthYear) {
//     this.firstName = firstName;
//     this.birthYear = birthYear;
//   }
//   calcAge() {
//     console.log(2025 - this.birthYear);
//   }
// }
// const Meet = new PersonCL('Meet', 2020);
// console.log(Meet);

// class Student extends PersonCL {
//   constructor(firstName, birthYear, course) {
//     //Always needs to happen first
//     super(firstName, birthYear);
//   }
// }a

// encapsulation : Private CLass fields and Methods

class Account {
  // Public fields
  locale = navigator.language;
  bank = 'Bankist';

  // Private fields
  #movements = [];
  #pin;
  constructor(owner, currency, pin) {
    this.owner = owner;
    this.currency = currency;
    this.#pin = pin;
    // this.movements = [];

    console.log(`thanks for opwning account, ${owner}`);
  }

  getMovements() {
    return this.#movements;
  }
  // public interface (API)
  deposit(val) {
    this.#movements.push(val);
    return this;
  }
  withdraw(val) {
    this.deposit(-val);
    return this;
  }
  #apprproveLoan(val) {
    return true;
  }
  requestLoan(val) {
    if (this.#apprproveLoan(val)) {
      this.deposit(val);
      console.log('Loan approved');
    }
    return this;
  }
}

const acc1 = new Account('Jonas', 'EUR', 1111);
console.log(acc1);
acc1.deposit(300).withdraw(700).requestLoan(20000).withdraw(300);
console.log(acc1);
