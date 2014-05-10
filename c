[1mdiff --git a/CNAME b/CNAME[m
[1mindex bc4a24c..ab72e9c 100644[m
[1m--- a/CNAME[m
[1m+++ b/CNAME[m
[36m@@ -1 +1 @@[m
[31m-www.rohithvaranasi.com[m
\ No newline at end of file[m
[32m+[m[32mrohithvaranasi.com[m
\ No newline at end of file[m
[1mdiff --git a/index.html b/index.html[m
[1mindex 013be89..cfad077 100644[m
[1m--- a/index.html[m
[1m+++ b/index.html[m
[36m@@ -1,15 +1,211 @@[m
[31m-<!DOCTYPE HTML>[m
[31m-<html>[m
[31m-[m
[32m+[m[32m<!doctype html>[m
[32m+[m[32m<html lang="en">[m
 <head>[m
[32m+[m[32m    <meta charset="utf-8">[m
[32m+[m[32m<meta name="viewport" content="width=device-width, initial-scale=1.0">[m
[32m+[m[32m<meta name="description" content="A layout example that shows off a responsive product landing page.">[m
[32m+[m
[32m+[m[32m    <title>Landing Page &ndash; Layout Examples &ndash; Pure</title>[m
[32m+[m
[32m+[m[41m    [m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m<link rel="stylesheet" href="http://yui.yahooapis.com/pure/0.4.2/pure.css">[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[41m  [m
[32m+[m[32m    <!--[if lte IE 8]>[m
[32m+[m[32m        <link rel="stylesheet" href="css/main-grid-old-ie.css">[m
[32m+[m[32m    <![endif]-->[m
[32m+[m[32m    <!--[if gt IE 8]><!-->[m
[32m+[m[32m        <link rel="stylesheet" href="css/main-grid.css">[m
[32m+[m[32m    <!--<![endif]-->[m
[32m+[m[41m  [m
[32m+[m
[32m+[m[41m  [m
[32m+[m[32m    <!--[if lte IE 8]>[m
[32m+[m[32m        <link rel="stylesheet" href="css/layouts/marketing-old-ie.css">[m
[32m+[m[32m    <![endif]-->[m
[32m+[m[32m    <!--[if gt IE 8]><!-->[m
[32m+[m[32m        <link rel="stylesheet" href="css/layouts/marketing.css">[m
[32m+[m[32m    <!--<![endif]-->[m
[32m+[m[41m  [m
 [m
[31m-    <title>Rohith Varanasi</title>[m
[31m-    <link rel="stylesheet" href="http://yui.yahooapis.com/pure/0.4.2/pure-min.css">    [m
 [m
[31m-</head>[m
 [m
[32m+[m[32m<link rel="stylesheet" href="http://netdna.bootstrapcdn.com/font-awesome/4.0.3/css/font-awesome.css">[m
[32m+[m
[32m+[m
[32m+[m[41m    [m
[32m+[m
[32m+[m[41m    [m
[32m+[m
[32m+[m[41m    [m
[32m+[m
[32m+[m[32m</head>[m
 <body>[m
[31m-    <p>ayy</p>[m
[31m-</body>[m
 [m
[31m-</html>[m
\ No newline at end of file[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m<div class="header">[m
[32m+[m[32m    <div class="home-menu pure-menu pure-menu-open pure-menu-horizontal pure-menu-fixed">[m
[32m+[m[32m        <a class="pure-menu-heading" href="">Your Site</a>[m
[32m+[m
[32m+[m[32m        <ul>[m
[32m+[m[32m            <li class="pure-menu-selected"><a href="#">Home</a></li>[m
[32m+[m[32m            <li><a href="#">Tour</a></li>[m
[32m+[m[32m            <li><a href="#">Sign Up</a></li>[m
[32m+[m[32m        </ul>[m
[32m+[m[32m    </div>[m
[32m+[m[32m</div>[m
[32m+[m
[32m+[m[32m<div class="splash-container">[m
[32m+[m[32m    <div class="splash">[m
[32m+[m[32m        <h1 class="splash-head">Big Bold Text</h1>[m
[32m+[m[32m        <p class="splash-subhead">[m
[32m+[m[32m            Lorem ipsum dolor sit amet, consectetur adipisicing elit.[m
[32m+[m[32m        </p>[m
[32m+[m[32m        <p>[m
[32m+[m[32m            <a href="http://purecss.io" class="pure-button pure-button-primary">Get Started</a>[m
[32m+[m[32m        </p>[m
[32m+[m[32m    </div>[m
[32m+[m[32m</div>[m
[32m+[m
[32m+[m[32m<div class="content-wrapper">[m
[32m+[m[32m    <div class="content">[m
[32m+[m[32m        <h2 class="content-head is-center">Excepteur sint occaecat cupidatat.</h2>[m
[32m+[m
[32m+[m[32m        <div class="pure-g">[m
[32m+[m[32m            <div class="l-box pure-u-1 pure-u-med-1-2 pure-u-lrg-1-4">[m
[32m+[m
[32m+[m[32m                <h3 class="content-subhead">[m
[32m+[m[32m                    <i class="fa fa-rocket"></i>[m
[32m+[m[32m                    Get Started Quickly[m
[32m+[m[32m                </h3>[m
[32m+[m[32m                <p>[m
[32m+[m[32m                    Phasellus eget enim eu lectus faucibus vestibulum. Suspendisse sodales pellentesque elementum.[m
[32m+[m[32m                </p>[m
[32m+[m[32m            </div>[m
[32m+[m[32m            <div class="l-box pure-u-1 pure-u-med-1-2 pure-u-lrg-1-4">[m
[32m+[m[32m                <h3 class="content-subhead">[m
[32m+[m[32m                    <i class="fa fa-mobile"></i>[m
[32m+[m[32m                    Responsive Layouts[m
[32m+[m[32m                </h3>[m
[32m+[m[32m                <p>[m
[32m+[m[32m                    Phasellus eget enim eu lectus faucibus vestibulum. Suspendisse sodales pellentesque elementum.[m
[32m+[m[32m                </p>[m
[32m+[m[32m            </div>[m
[32m+[m[32m            <div class="l-box pure-u-1 pure-u-med-1-2 pure-u-lrg-1-4">[m
[32m+[m[32m                <h3 class="content-subhead">[m
[32m+[m[32m                    <i class="fa fa-th-large"></i>[m
[32m+[m[32m                    Modular[m
[32m+[m[32m                </h3>[m
[32m+[m[32m                <p>[m
[32m+[m[32m                    Phasellus eget enim eu lectus faucibus vestibulum. Suspendisse sodales pellentesque elementum.[m
[32m+[m[32m                </p>[m
[32m+[m[32m            </div>[m
[32m+[m[32m            <div class="l-box pure-u-1 pure-u-med-1-2 pure-u-lrg-1-4">[m
[32m+[m[32m                <h3 class="content-subhead">[m
[32m+[m[32m                    <i class="fa fa-check-square-o"></i>[m
[32m+[m[32m                    Plays Nice[m
[32m+[m[32m                </h3>[m
[32m+[m[32m                <p>[m
[32m+[m[32m                    Phasellus eget enim eu lectus faucibus vestibulum. Suspendisse sodales pellentesque elementum.[m
[32m+[m[32m                </p>[m
[32m+[m[32m            </div>[m
[32m+[m[32m        </div>[m
[32m+[m[32m    </div>[m
[32m+[m
[32m+[m[32m    <div class="ribbon l-box-lrg pure-g">[m
[32m+[m[32m        <div class="l-box-lrg is-center pure-u-1 pure-u-med-1-2 pure-u-lrg-2-5">[m
[32m+[m[32m            <img class="pure-img-responsive" alt="File Icons" width="300" src="img/common/file-icons.png">[m
[32m+[m[32m        </div>[m
[32m+[m[32m        <div class="pure-u-1 pure-u-med-1-2 pure-u-lrg-3-5">[m
[32m+[m
[32m+[m[32m            <h2 class="content-head content-head-ribbon">Laboris nisi ut aliquip.</h2>[m
[32m+[m
[32m+[m[32m            <p>[m
[32m+[m[32m                Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod[m
[32m+[m[32m                tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,[m
[32m+[m[32m                quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo[m
[32m+[m[32m                consequat. Duis aute irure dolor.[m
[32m+[m[32m            </p>[m
[32m+[m[32m        </div>[m
[32m+[m[32m    </div>[m
[32m+[m
[32m+[m[32m    <div class="content">[m
[32m+[m[32m        <h2 class="content-head is-center">Dolore magna aliqua. Uis aute irure.</h2>[m
[32m+[m
[32m+[m[32m        <div class="pure-g">[m
[32m+[m[32m            <div class="l-box-lrg pure-u-1 pure-u-med-2-5">[m
[32m+[m[32m                <form class="pure-form pure-form-stacked">[m
[32m+[m[32m                    <fieldset>[m
[32m+[m
[32m+[m[32m                        <label for="email">Your Name</label>[m
[32m+[m[32m                        <input id="email" type="text" placeholder="Your Name">[m
[32m+[m
[32m+[m
[32m+[m[32m                        <label for="email">Your Email</label>[m
[32m+[m[32m                        <input id="email" type="email" placeholder="Your Email">[m
[32m+[m
[32m+[m[32m                        <label for="password">Your Password</label>[m
[32m+[m[32m                        <input id="password" type="password" placeholder="Your Password">[m
[32m+[m
[32m+[m[32m                        <button type="submit" class="pure-button">Sign Up</button>[m
[32m+[m[32m                    </fieldset>[m
[32m+[m[32m                </form>[m
[32m+[m[32m            </div>[m
[32m+[m
[32m+[m[32m            <div class="l-box-lrg pure-u-1 pure-u-med-3-5">[m
[32m+[m[32m                <h4>Contact Us</h4>[m
[32m+[m[32m                <p>[m
[32m+[m[32m                    Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod[m
[32m+[m[32m                    tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam,[m
[32m+[m[32m                    quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo[m
[32m+[m[32m                    consequat.[m
[32m+[m[32m                </p>[m
[32m+[m
[32m+[m[32m                <h4>More Information</h4>[m
[32m+[m[32m                <p>[m
[32m+[m[32m                    Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod[m
[32m+[m[32m                    tempor incididunt ut labore et dolore magna aliqua.[m
[32m+[m[32m                </p>[m
[32m+[m[32m            </div>[m
[32m+[m[32m        </div>[m
[32m+[m
[32m+[m[32m    </div>[m
[32m+[m
[32m+[m[32m    <div class="footer l-box is-center">[m
[32m+[m[32m        View the source of this layout to learn more. Made with love by the YUI Team.[m
[32m+[m[32m    </div>[m
[32m+[m
[32m+[m[32m</div>[m
[32m+[m
[32m+[m[32m<script src="http://yui.yahooapis.com/3.14.1/build/yui/yui.js"></script>[m
[32m+[m[32m<script>[m
[32m+[m[32mYUI().use('node-base', 'node-event-delegate', function (Y) {[m
[32m+[m[32m    // This just makes sure that the href="#" attached to the <a> elements[m
[32m+[m[32m    // don't scroll you back up the page.[m
[32m+[m[32m    Y.one('body').delegate('click', function (e) {[m
[32m+[m[32m        e.preventDefault();[m
[32m+[m[32m    }, 'a[href="#"]');[m
[32m+[m[32m});[m
[32m+[m[32m</script>[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m
[32m+[m[32m</body>[m
[32m+[m[32m</html>[m
warning: LF will be replaced by CRLF in index.html.
The file will have its original line endings in your working directory.
