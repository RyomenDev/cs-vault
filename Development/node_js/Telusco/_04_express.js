const express = require("express");

const _04_express = express();
// const app = express(); - ame of file req

_04_express.get('/',function(req,res){
    // console.log('hello world!');
    res.send('hello world!'); //http://localhost:9000
})

_04_express.get('/alien',function(req,res){
    const id=req.query.id //http://localhost:9000/alien?id=21

    res.send('welcome back Alien '+id) //http://localhost:9000/alien
})

// _04_express.get('/alien/20',function(req,res){
_04_express.get('/alien/:id',function(req,res){
    const id=req.params.id
    res.send("yes yes "+id);
})

_04_express.listen(9000,function(req,res){
    console.log("running.."); 
});