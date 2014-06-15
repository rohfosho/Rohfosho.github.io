var chatRef = new Firebase('https://kloudkontacts.firebaseio.com');
var auth = new FirebaseSimpleLogin(chatRef, function(error, user) {
  if (error) {
    // an error occurred while attempting login
    console.log(error);
  } else if (user) {
    // user authenticated with Firebase
    console.log('User ID: ' + user.uid + ', Provider: ' + user.provider);
    $('#stuff').empty().append('<h1 style="color:#026db0;">Your Contacts</h1>');
    $('#stuff').append();
  } else {
    // user is logged out
  }
});
function loginBruh()
{
    auth.login('facebook');
}