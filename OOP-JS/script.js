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

const PersonProto = {
  clacAge() {
    console.log(2025 - this.birthYear);
  },
};

const steven = Object.create(PersonProto);
steven.name = 'Steven';
steven.birthYear = 2002;
steven.clacAge();
