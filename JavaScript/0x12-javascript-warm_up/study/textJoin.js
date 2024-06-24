#!/usr/bin/node

const text = ["Emma", "is", "coding"];

const strJoin = text.join(" ");

console.log(strJoin);

//Parameters can be optional
// If no delimiting/joining character is specified, comma is used as default
// Example below without delimiting parameter
const strJoinDefault = text.join()
console.log(strJoinDefault);
