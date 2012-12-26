//SUB.js
//LOAD THIS MODULE
console.log('loading sub.js - Company from subfolder');

var company = {}
  company.insert = function(what) 
    {
      console.log('test inserted ' + what);
    }

  company.functwo = function(what) 
    {
      console.log('test inside functwo: ' + what);
    }

module.exports = company;


