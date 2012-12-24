//SUB.js
//LOAD THIS MODULE
console.log('loading sub.js - Company');

var company = {}
  company.insert = function(what) 
    {
      console.log('inserted ' + what);
    }

  company.functwo = function(what) 
    {
      console.log('inside functwo: ' + what);
    }

module.exports = company;


