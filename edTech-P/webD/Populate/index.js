const Post = require("./models/Post");
const User = require("./models/User");

const createUser = async () => {
  const user = new User({
    name: "John Doe",
    email: "john@example.com",
  });
  await user.save();
  console.log("User created:", user);
};

createUser();

const createPost = async () => {
  const user = await User.findOne({ email: "john@example.com" });
  const post = new Post({
    title: "My First Post",
    content: "This is the content of my first post.",
    author: user._id, // Reference the user's ObjectId
  });
  await post.save();
  console.log("Post created:", post);
};

createPost();
