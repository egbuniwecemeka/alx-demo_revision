#!/usr/bin/node
// Function retrieving user info from github

// importing the request module
const request = require('request');
//api's url passed as argument in command line
const base_url = process.argv[2];

request.get(base_url, 'utf-8', (err, response) => {
  if (err) {
    console.error(err);
  }
  console.log(response);
})


