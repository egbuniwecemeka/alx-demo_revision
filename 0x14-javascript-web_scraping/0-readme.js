#!/usr/bin/python3
// import request module
const fs = require('fs');

const filePath = process.argv[2];

fs.readFile(filePath, 'utf-8', (error, response) => {
  if (error) {
    console.error(error);
  }
  console.log(response);
})
