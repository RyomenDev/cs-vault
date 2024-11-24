const mongoose = require('mongoose');

const userSchema = new mongoose.Schema({
    name: String,
    email: String,
    password: String
});

// Post-save middleware to log user creation
userSchema.post('save', function(doc, next) {
    console.log(`User ${doc._id} has been saved`);
    next();
});

const User = mongoose.model('User', userSchema);
