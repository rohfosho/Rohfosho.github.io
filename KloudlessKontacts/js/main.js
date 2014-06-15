var chatRef = new Firebase('https://kloudkontacts.firebaseio.com');
var auth = new FirebaseSimpleLogin(chatRef, function(error, user) {
  if (error) {
    // an error occurred while attempting login
    console.log(error);
  } else if (user) {
    // user authenticated with Firebase
    console.log('User ID: ' + user.uid + ', Provider: ' + user.provider);
    $('#stuff').empty();
  } else {
    // user is logged out
  }
});
function loginBruh()
{
    auth.login('facebook');
}