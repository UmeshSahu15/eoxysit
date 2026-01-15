const express = require("express");
const app = express();

app.get("/", (req, res) => res.send("🚀 CI/CD pipeline working on Ubuntu!"));

app.get("/", (req, res) => res.send("🚀 HELLO EVERYONE GOOD MORNING"));

app.listen(3000, () => console.log("App running on port 3000"));

