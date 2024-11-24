const mongoose = require('mongoose');
const Schema = mongoose.Schema;

const PostSchema = new Schema({
    title: String,
    content: String,
    author: { type: Schema.Types.ObjectId, ref: 'User' }  // Reference to User model
});

const Post = mongoose.model('Post', PostSchema);
module.exports = Post;
