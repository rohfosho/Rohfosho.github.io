var chatRef = new Firebase('https://kloudkontacts.firebaseio.com');
var auth = new FirebaseSimpleLogin(chatRef, function(error, user) {
  if (error) {
    // an error occurred while attempting login
    console.log(error);
  } else if (user) {
    // user authenticated with Firebase
    console.log('User ID: ' + user.uid + ', Provider: ' + user.provider);
    $('#stuff').empty().appent('<h1 style="color:#026db0;">Login</h1><button type="submit" class="btn" style="background:#3b5998;color:white;" onclick="loginBruh();">Sign Up with Facebook</button>');
  } else {
    // user is logged out
  }
});
function loginBruh()
{
    auth.login('facebook');
}