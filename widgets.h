<!DOCTYPE html>

<!-- Auther: Shorouk Abdelaziz  https://shorouk.dev -->

<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta http-equiv="X-UA-Compatible" content="IE=edge">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>My Socials</title>

  <!-- Font Awesome -->
  <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.2.0/css/all.min.css">

  <style>
    * {
      margin: 0;
      padding: 0;
      box-sizing: border-box;
    }

    body {
      display: grid;
      place-items: center;
    }

    .wrapper {
      padding-top: 10px;
      display: inline-flex;

    }

    .social {
      background-color: #eae9e9;
      width: 55px;
      height: 55px;
      border-radius: 50%;
      display: grid;
      place-items: center;
    }

    .icon {
      font-size: 1.2em;
    }

    .blog:hover {
      background-color: #ffbd2f;
    }

    .email:hover {
      background-color: #23c8c8;
    }

    .facebook:hover {
      background-color: #4267B2;
    }

    .instagram:hover {
      background: rgb(241, 102, 217);
      background: radial-gradient(circle, rgba(241, 102, 217, 1) 10%, rgba(252, 176, 69, 1) 76%, rgba(253, 29, 29, 1) 100%);
    }


    .twitter:hover {
      background-color: #26a7de;
    }


    .youtube:hover {
      background-color: #FF0000;
    }


    .telegram:hover {
      background-color: #2AABEE;
    }

    .social {
      position: relative;
      margin: 10px;
      cursor: pointer;
    }

    .social:hover {
      color: #fff;
    }
  </style>

</head>

<body>

  <body>

    <div class="wrapper">


      <!-- Start email Icon -->
      <div id="email" onclick="navigate(this.id)" class="social email">
        <span class="icon email"><i class="fa-solid fa-envelope"></i></span>
      </div>
      <!-- End email Icon -->


      <!-- Start twitter Icon -->
      <div id="twitter" onclick="navigate(this.id)" class="social twitter">
        <span class="icon"><i class="fab fa-twitter"></i></span>
      </div>
      <!-- End twitter Icon -->


      <!-- Start youtube Icon -->
      <div id="youtube" onclick="navigate(this.id)" class="social youtube">
        <span class="icon"><i class="fab fa-youtube"></i></span>
      </div>
      <!-- End youtube Icon -->

      <!-- Start pinterest Icon -->
      <div id="pinterest" onclick="navigate(this.id)" class="social pinterest">
        <span class="icon"><i class="fab fa-pinterest"></i></span>
      </div>
      <!-- End pinterest Icon -->

      <!-- Start telegram Icon -->
      <div id="telegram" onclick="navigate(this.id)" class="social telegram">
        <span class="icon telegram"><i class="fab fa-telegram"></i></span>
      </div>
      <!-- End telegram Icon -->

    </div>




    <script>
      function navigate(id) {

        //if you want the URL to open in the same window use '_parent'  instead of '_blank'


        if (id === "email") {
          window.open("mailto:jeff@exceptionalhabit.com", '_blank').focus(); //Add your email after "mailto:""
        }

        else if (id === "twitter") {
          window.open("https://twitter.com/HabitExcel", '_blank').focus(); //Add the url to your pinterest account
        }
    
          window.open("https://www.youtube.com/channel/UCujtUtvahPaJN-jbe7cEmCw/", '_blank').focus(); //Add the url to your youtube account
        }
        else if (id === "pinterest") {
          window.open("https://www.pinterest.com/", '_blank').focus(); //Add the url to your pinterest account
        }
        else if (id === "telegram") {
          window.open("https://t.me/+Hg_YYlALvzlhNTEx", '_blank').focus(); //Add the url to your telegram account
        }
      }

    </script>



  </body>

</html>
