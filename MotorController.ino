  


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>Arduino-Codes/MotorController.ino at master · gskielian/Arduino-Codes</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="http://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <link rel="assets" href="https://a248.e.akamai.net/assets.github.com/">
    <link rel="xhr-socket" href="/_sockets" />
    


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="4149080" name="octolytics-actor-id" /><meta content="gskielian" name="octolytics-actor-login" /><meta content="d95f9514719974f267926d2314491f24d1ad2673b6ab414bd7fdbcfbd82c718b" name="octolytics-actor-hash" />

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="B+KF5gFaFB7GliRcRGZeu8UvFxtSK4y6va0zswAYiq0=" name="csrf-token" />

    <link href="https://a248.e.akamai.net/assets.github.com/assets/github-81b13ea53b1680d36f84ba58001e4a489c3f99d2.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://a248.e.akamai.net/assets.github.com/assets/github2-9cc857b0b33a0b1a963ad20e5df0c382710aac1a.css" media="all" rel="stylesheet" type="text/css" />
    


      <script src="https://a248.e.akamai.net/assets.github.com/assets/frameworks-4c434fa1705bf526e191eec0cd8fab1a5ce3e326.js" type="text/javascript"></script>
      <script src="https://a248.e.akamai.net/assets.github.com/assets/github-a33fddd0638662bac79219290a23f89c0263f306.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="2b45f0dd386e66239e55e439f9fa41bb">

        <link data-pjax-transient rel='permalink' href='/gskielian/Arduino-Codes/blob/e13e4b2d5f693081a09cf2d776400bf86098fd85/MotorController.ino'>
    <meta property="og:title" content="Arduino-Codes"/>
    <meta property="og:type" content="githubog:gitrepository"/>
    <meta property="og:url" content="https://github.com/gskielian/Arduino-Codes"/>
    <meta property="og:image" content="https://secure.gravatar.com/avatar/8fa092104ea9f549f731d02fabbe94c4?s=420&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png"/>
    <meta property="og:site_name" content="GitHub"/>
    <meta property="og:description" content="Arduino-Codes - Source codes for my awesome students : )"/>
    <meta property="twitter:card" content="summary"/>
    <meta property="twitter:site" content="@GitHub">
    <meta property="twitter:title" content="gskielian/Arduino-Codes"/>

    <meta name="description" content="Arduino-Codes - Source codes for my awesome students : )" />


    <meta content="4149080" name="octolytics-dimension-user_id" /><meta content="gskielian" name="octolytics-dimension-user_login" /><meta content="9794359" name="octolytics-dimension-repository_id" /><meta content="gskielian/Arduino-Codes" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="9794359" name="octolytics-dimension-repository_network_root_id" /><meta content="gskielian/Arduino-Codes" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/gskielian/Arduino-Codes/commits/master.atom" rel="alternate" title="Recent Commits to Arduino-Codes:master" type="application/atom+xml" />

  </head>


  <body class="logged_in page-blob windows vis-public env-production  ">
    <div id="wrapper">

      
      
      

      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    <div class="divider-vertical"></div>

      <a href="/notifications" class="notification-indicator tooltipped downwards" title="You have no unread notifications">
    <span class="mail-status all-read"></span>
  </a>
  <div class="divider-vertical"></div>


      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">
  <a href="/search/advanced" class="advanced-search-icon tooltipped downwards command-bar-search" id="advanced_search" title="Advanced search"><span class="octicon octicon-gear "></span></a>

  <input type="text" data-hotkey="/ s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    data-username="gskielian"
      data-repo="gskielian/Arduino-Codes"
      data-branch="master"
      data-sha="171829d17b3fc3aadcd9a16ed74a76722e2b6f47"
  >

    <input type="hidden" name="nwo" value="gskielian/Arduino-Codes" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="octicon help tooltipped downwards" title="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

  <div class="divider-vertical"></div>

</form>
        <ul class="top-nav">
            <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="http://help.github.com">Help</a></li>
        </ul>
      </div>

    

  

    <ul id="user-links">
      <li>
        <a href="/gskielian" class="name">
          <img height="20" src="https://secure.gravatar.com/avatar/8fa092104ea9f549f731d02fabbe94c4?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /> gskielian
        </a>
      </li>

        <li>
          <a href="/new" id="new_repo" class="tooltipped downwards" title="Create a new repo">
            <span class="octicon octicon-repo-create"></span>
          </a>
        </li>

        <li>
          <a href="/settings/profile" id="account_settings"
            class="tooltipped downwards"
            title="Account settings ">
            <span class="octicon octicon-tools"></span>
          </a>
        </li>
        <li>
          <a class="tooltipped downwards" href="/logout" data-method="post" id="logout" title="Sign out">
            <span class="octicon octicon-log-out"></span>
          </a>
        </li>

    </ul>


<div class="js-new-dropdown-contents hidden">
  <ul class="dropdown-menu">
    <li>
      <a href="/new"><span class="octicon octicon-repo-create"></span> New repository</a>
    </li>
    <li>
        <a href="/gskielian/Arduino-Codes/issues/new"><span class="octicon octicon-issue-opened"></span> New issue</a>
    </li>
    <li>
    </li>
    <li>
      <a href="/organizations/new"><span class="octicon octicon-list-unordered"></span> New organization</a>
    </li>
  </ul>
</div>


    
  </div>
</div>

      

      


            <div class="site hfeed" itemscope itemtype="http://schema.org/WebPage">
      <div class="hentry">
        
        <div class="pagehead repohead instapaper_ignore readability-menu ">
          <div class="container">
            <div class="title-actions-bar">
              

<ul class="pagehead-actions">

    <li class="nspr">
      <a href="/gskielian/Arduino-Codes/pull/new/master" class="button minibutton btn-pull-request" icon_class="octicon-git-pull-request"><span class="octicon octicon-git-pull-request"></span>Pull Request</a>
    </li>

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="B+KF5gFaFB7GliRcRGZeu8UvFxtSK4y6va0zswAYiq0=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="9794359" />

    <div class="select-menu js-menu-container js-select-menu">
      <span class="minibutton select-menu-button  js-menu-target">
        <span class="js-select-button">
          <span class="octicon octicon-eye-unwatch"></span>
          Unwatch
        </span>
      </span>

      <div class="select-menu-modal-holder js-menu-content">
        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container">

            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for discussions in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-watch"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

    <li class="js-toggler-container js-social-container starring-container ">
      <a href="/gskielian/Arduino-Codes/unstar" class="minibutton with-count js-toggler-target star-button starred upwards" title="Unstar this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="octicon octicon-star-delete"></span>
        <span class="text">Unstar</span>
      </a>
      <a href="/gskielian/Arduino-Codes/star" class="minibutton with-count js-toggler-target star-button unstarred upwards" title="Star this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="octicon octicon-star"></span>
        <span class="text">Star</span>
      </a>
      <a class="social-count js-social-count" href="/gskielian/Arduino-Codes/stargazers">0</a>
    </li>

        <li>
          <a href="/gskielian/Arduino-Codes/fork" class="minibutton with-count js-toggler-target fork-button lighter upwards" title="Fork this repo" rel="facebox nofollow">
            <span class="octicon octicon-git-branch-create"></span>
            <span class="text">Fork</span>
          </a>
          <a href="/gskielian/Arduino-Codes/network" class="social-count">0</a>
        </li>


</ul>

              <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
                <span class="repo-label"><span>public</span></span>
                <span class="mega-octicon octicon-repo"></span>
                <span class="author vcard">
                  <a href="/gskielian" class="url fn" itemprop="url" rel="author">
                  <span itemprop="title">gskielian</span>
                  </a></span> /
                <strong><a href="/gskielian/Arduino-Codes" class="js-current-repository">Arduino-Codes</a></strong>
              </h1>
            </div>

            
  <ul class="tabs">
    <li class="pulse-nav"><a href="/gskielian/Arduino-Codes/pulse" class="js-selected-navigation-item " data-selected-links="pulse /gskielian/Arduino-Codes/pulse" rel="nofollow"><span class="octicon octicon-pulse"></span></a></li>
    <li><a href="/gskielian/Arduino-Codes" class="js-selected-navigation-item selected" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /gskielian/Arduino-Codes">Code</a></li>
    <li><a href="/gskielian/Arduino-Codes/network" class="js-selected-navigation-item " data-selected-links="repo_network /gskielian/Arduino-Codes/network">Network</a></li>
    <li><a href="/gskielian/Arduino-Codes/pulls" class="js-selected-navigation-item " data-selected-links="repo_pulls /gskielian/Arduino-Codes/pulls">Pull Requests <span class='counter'>0</span></a></li>

      <li><a href="/gskielian/Arduino-Codes/issues" class="js-selected-navigation-item " data-selected-links="repo_issues /gskielian/Arduino-Codes/issues">Issues <span class='counter'>0</span></a></li>

      <li><a href="/gskielian/Arduino-Codes/wiki" class="js-selected-navigation-item " data-selected-links="repo_wiki /gskielian/Arduino-Codes/wiki">Wiki</a></li>


    <li><a href="/gskielian/Arduino-Codes/graphs" class="js-selected-navigation-item " data-selected-links="repo_graphs repo_contributors /gskielian/Arduino-Codes/graphs">Graphs</a></li>

      <li>
        <a href="/gskielian/Arduino-Codes/settings">Settings</a>
      </li>

  </ul>
  
<div class="tabnav">

  <span class="tabnav-right">
    <ul class="tabnav-tabs">
          <li><a href="/gskielian/Arduino-Codes/tags" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_tags /gskielian/Arduino-Codes/tags">Tags <span class="counter blank">0</span></a></li>
    </ul>
  </span>

  <div class="tabnav-widget scope">


    <div class="select-menu js-menu-container js-select-menu js-branch-menu">
      <a class="minibutton select-menu-button js-menu-target" data-hotkey="w" data-ref="master">
        <span class="octicon octicon-git-branch"></span>
        <i>branch:</i>
        <span class="js-select-button">master</span>
      </a>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">

        <div class="select-menu-modal">
          <div class="select-menu-header">
            <span class="select-menu-title">Switch branches/tags</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-filters">
            <div class="select-menu-text-filter">
              <input type="text" id="commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
            </div>
            <div class="select-menu-tabs">
              <ul>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
                </li>
                <li class="select-menu-tab">
                  <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
                </li>
              </ul>
            </div><!-- /.select-menu-tabs -->
          </div><!-- /.select-menu-filters -->

          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="branches">

            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

                <div class="select-menu-item js-navigation-item ">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/gskielian/Arduino-Codes/blob/gh-pages/MotorController.ino" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="gh-pages" rel="nofollow" title="gh-pages">gh-pages</a>
                </div> <!-- /.select-menu-item -->
                <div class="select-menu-item js-navigation-item selected">
                  <span class="select-menu-item-icon octicon octicon-check"></span>
                  <a href="/gskielian/Arduino-Codes/blob/master/MotorController.ino" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="master" rel="nofollow" title="master">master</a>
                </div> <!-- /.select-menu-item -->
            </div>

              <form accept-charset="UTF-8" action="/gskielian/Arduino-Codes/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="B+KF5gFaFB7GliRcRGZeu8UvFxtSK4y6va0zswAYiq0=" /></div>

                <span class="octicon octicon-git-branch-create select-menu-item-icon"></span>
                <div class="select-menu-item-text">
                  <h4>Create branch: <span class="js-new-item-name"></span></h4>
                  <span class="description">from ‘master’</span>
                </div>
                <input type="hidden" name="name" id="name" class="js-new-item-value">
                <input type="hidden" name="branch" id="branch" value="master" />
                <input type="hidden" name="path" id="branch" value="MotorController.ino" />
              </form> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->


          <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket css-truncate" data-tab-filter="tags">
            <div data-filterable-for="commitish-filter-field" data-filterable-type="substring">

            </div>

            <div class="select-menu-no-results">Nothing to show</div>

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

  </div> <!-- /.scope -->

  <ul class="tabnav-tabs">
    <li><a href="/gskielian/Arduino-Codes" class="selected js-selected-navigation-item tabnav-tab" data-selected-links="repo_source /gskielian/Arduino-Codes">Files</a></li>
    <li><a href="/gskielian/Arduino-Codes/commits/master" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_commits /gskielian/Arduino-Codes/commits/master">Commits</a></li>
    <li><a href="/gskielian/Arduino-Codes/branches" class="js-selected-navigation-item tabnav-tab" data-selected-links="repo_branches /gskielian/Arduino-Codes/branches" rel="nofollow">Branches <span class="counter ">2</span></a></li>
  </ul>

</div>

  
  
  


            
          </div>
        </div><!-- /.repohead -->

        <div id="js-repo-pjax-container" class="container context-loader-container" data-pjax-container>
          


<!-- blob contrib key: blob_contributors:v21:80fb6d3fc3c7fba91e95587b3713aac2 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:80fb6d3fc3c7fba91e95587b3713aac2 -->


<div id="slider">
    <div class="frame-meta">

      <p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

        <div class="breadcrumb">
          <span class='bold'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/gskielian/Arduino-Codes" class="js-slide-to" data-branch="master" data-direction="back" itemscope="url"><span itemprop="title">Arduino-Codes</span></a></span></span><span class="separator"> / </span><strong class="final-path">MotorController.ino</strong> <span class="js-zeroclipboard zeroclipboard-button" data-clipboard-text="MotorController.ino" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
        </div>

      <a href="/gskielian/Arduino-Codes/find/master" class="js-slide-to" data-hotkey="t" style="display:none">Show File Finder</a>


        
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/8fa092104ea9f549f731d02fabbe94c4?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/gskielian" rel="author">gskielian</a></span>
    <time class="js-relative-date" datetime="2013-06-11T15:42:30-07:00" title="2013-06-11 15:42:30">June 11, 2013</time>
    <div class="commit-title">
        <a href="/gskielian/Arduino-Codes/commit/e13e4b2d5f693081a09cf2d776400bf86098fd85" class="message">Update MotorController.ino</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>1</strong> contributor</a></p>
      
    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li class="facebox-user-list-item">
          <img height="24" src="https://secure.gravatar.com/avatar/8fa092104ea9f549f731d02fabbe94c4?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/gskielian">gskielian</a>
        </li>
      </ul>
    </div>
  </div>


    </div><!-- ./.frame-meta -->

    <div class="frames">
      <div class="frame" data-permalink-url="/gskielian/Arduino-Codes/blob/e13e4b2d5f693081a09cf2d776400bf86098fd85/MotorController.ino" data-title="Arduino-Codes/MotorController.ino at master · gskielian/Arduino-Codes · GitHub" data-type="blob">

        <div id="files" class="bubble">
          <div class="file">
            <div class="meta">
              <div class="info">
                <span class="icon"><b class="octicon octicon-file-text"></b></span>
                <span class="mode" title="File Mode">file</span>
                  <span>114 lines (65 sloc)</span>
                <span>2.586 kb</span>
              </div>
              <div class="actions">
                <div class="button-group">
                        <a class="minibutton"
                           href="/gskielian/Arduino-Codes/edit/master/MotorController.ino"
                           data-method="post" rel="nofollow" data-hotkey="e">Edit</a>
                  <a href="/gskielian/Arduino-Codes/raw/master/MotorController.ino" class="button minibutton " id="raw-url">Raw</a>
                    <a href="/gskielian/Arduino-Codes/blame/master/MotorController.ino" class="button minibutton ">Blame</a>
                  <a href="/gskielian/Arduino-Codes/commits/master/MotorController.ino" class="button minibutton " rel="nofollow">History</a>
                </div><!-- /.button-group -->
              </div><!-- /.actions -->

            </div>
                <div class="blob-wrapper data type-arduino js-blob-data">
      <table class="file-code file-diff">
        <tr class="file-code-line">
          <td class="blob-line-nums">
            <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>

          </td>
          <td class="blob-line-code">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="c1">// This code is based on a program called &quot;Sweep&quot;</span></div><div class='line' id='LC2'><span class="c1">// by BARRAGAN &lt;http://barraganstudio.com&gt; </span></div><div class='line' id='LC3'><span class="c1">// (which is an example placed in the public domain found under the example menu of the Arduino IDE)</span></div><div class='line' id='LC4'><span class="c1">// and we also utilize the Servo.h Library</span></div><div class='line' id='LC5'><br/></div><div class='line' id='LC6'><span class="c1">//Creative commons license for my modifications</span></div><div class='line' id='LC7'><span class="c1">//</span></div><div class='line' id='LC8'><span class="c1">//I created additional functions created for handling continuous-rotation-servos as motors</span></div><div class='line' id='LC9'><span class="c1">//Forward, Backward, Stop, Stop, and attachServo</span></div><div class='line' id='LC10'><span class="c1">//by Gregory Kielian  &lt; www.kielian.net &gt; </span></div><div class='line' id='LC11'><span class="c1">//Special thanks to Chris Newton for his mentoring and help debugging the first drafts</span></div><div class='line' id='LC12'><br/></div><div class='line' id='LC13'><br/></div><div class='line' id='LC14'><span class="cp">#include &lt;Servo.h&gt; </span></div><div class='line' id='LC15'>&nbsp;</div><div class='line' id='LC16'><span class="n">Servo</span> <span class="n">LeftWheel</span><span class="p">;</span>  <span class="c1">// create servo object to control a servo </span></div><div class='line' id='LC17'><span class="n">Servo</span> <span class="n">RightWheel</span><span class="p">;</span>  <span class="c1">// create servo object to control a servo </span></div><div class='line' id='LC18'><br/></div><div class='line' id='LC19'><span class="c1">// Note: a maximum of eight servo objects can be created </span></div><div class='line' id='LC20'><br/></div><div class='line' id='LC21'><span class="kt">int</span> <span class="n">LWPin</span> <span class="o">=</span> <span class="mi">9</span><span class="p">;</span> <span class="c1">//set the pin number for your left servo-motors (just change the number if not pin 9)</span></div><div class='line' id='LC22'><span class="kt">int</span> <span class="n">RWPin</span> <span class="o">=</span> <span class="mi">6</span><span class="p">;</span> <span class="c1">//right-wheel control pin</span></div><div class='line' id='LC23'><br/></div><div class='line' id='LC24'><br/></div><div class='line' id='LC25'><br/></div><div class='line' id='LC26'><span class="kt">void</span> <span class="nf">setup</span><span class="p">()</span> </div><div class='line' id='LC27'><span class="p">{</span> </div><div class='line' id='LC28'>&nbsp;&nbsp;<span class="n">LeftWheel</span><span class="p">.</span><span class="n">attach</span><span class="p">(</span> <span class="n">LWPin</span> <span class="p">);</span>  <span class="c1">//  Connects LeftWheel to the pin LWPin</span></div><div class='line' id='LC29'>&nbsp;&nbsp;<span class="n">RightWheel</span><span class="p">.</span><span class="n">attach</span><span class="p">(</span> <span class="n">RWPin</span> <span class="p">);</span>  <span class="c1">// Connects another wheel to be controlled by the pin RWPin</span></div><div class='line' id='LC30'><br/></div><div class='line' id='LC31'><span class="p">}</span> </div><div class='line' id='LC32'>&nbsp;</div><div class='line' id='LC33'>&nbsp;</div><div class='line' id='LC34'><span class="kt">void</span> <span class="nf">loop</span><span class="p">()</span> </div><div class='line' id='LC35'><span class="p">{</span> </div><div class='line' id='LC36'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Rotate</span><span class="p">(</span><span class="mi">30</span><span class="p">);</span> <span class="c1">// rotate at 30% power</span></div><div class='line' id='LC37'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delay</span><span class="p">(</span><span class="mi">2000</span><span class="p">);</span> <span class="c1">// keep on doing this for 2 seconds or 2000 milliseconds</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><br/></div><div class='line' id='LC40'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Rotate</span><span class="p">(</span><span class="o">-</span><span class="mi">30</span><span class="p">);</span> <span class="c1">// Rotate the other way</span></div><div class='line' id='LC41'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delay</span><span class="p">(</span><span class="mi">1000</span><span class="p">);</span> <span class="c1">// for 1 second</span></div><div class='line' id='LC42'><br/></div><div class='line' id='LC43'><br/></div><div class='line' id='LC44'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Forward</span><span class="p">(</span><span class="mi">100</span><span class="p">);</span> <span class="c1">// Full steam ahead!</span></div><div class='line' id='LC45'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delay</span><span class="p">(</span><span class="mi">3000</span><span class="p">);</span> <span class="c1">// for 3 seconds</span></div><div class='line' id='LC46'><br/></div><div class='line' id='LC47'><br/></div><div class='line' id='LC48'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Backward</span><span class="p">(</span><span class="mi">50</span><span class="p">);</span> <span class="c1">// 50% power backwards</span></div><div class='line' id='LC49'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delay</span><span class="p">(</span><span class="mi">500</span><span class="p">);</span> <span class="c1">// for half-a-second</span></div><div class='line' id='LC50'><br/></div><div class='line' id='LC51'>&nbsp;</div><div class='line' id='LC52'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">Stop</span><span class="p">();</span> <span class="c1">// stop the wheels</span></div><div class='line' id='LC53'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">delay</span><span class="p">(</span><span class="mi">4000</span><span class="p">);</span> <span class="c1">// for 4 seconds</span></div><div class='line' id='LC54'><span class="p">}</span> </div><div class='line' id='LC55'><br/></div><div class='line' id='LC56'><br/></div><div class='line' id='LC57'><br/></div><div class='line' id='LC58'><br/></div><div class='line' id='LC59'><br/></div><div class='line' id='LC60'><br/></div><div class='line' id='LC61'><br/></div><div class='line' id='LC62'><br/></div><div class='line' id='LC63'><br/></div><div class='line' id='LC64'><span class="kt">void</span> <span class="nf">Forward</span><span class="p">(</span><span class="kt">int</span> <span class="n">speed</span><span class="p">)</span></div><div class='line' id='LC65'><span class="p">{</span></div><div class='line' id='LC66'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">attachServos</span><span class="p">();</span> <span class="c1">//in case we disconnected them</span></div><div class='line' id='LC67'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC68'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">speed</span> <span class="o">=</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="p">(</span><span class="n">speed</span><span class="o">/</span><span class="mf">100.0</span><span class="o">*</span><span class="mf">90.0</span> <span class="o">+</span> <span class="mi">90</span><span class="p">)</span> <span class="p">;</span>  <span class="c1">// translates it to servo-speak (servo input is from 0-180)</span></div><div class='line' id='LC69'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">LeftWheel</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">speed</span><span class="p">);</span>             </div><div class='line' id='LC70'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">RightWheel</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="o">-</span><span class="n">speed</span><span class="p">);</span> <span class="c1">// Right wheel is backwards    </span></div><div class='line' id='LC71'><span class="p">}</span></div><div class='line' id='LC72'><br/></div><div class='line' id='LC73'><br/></div><div class='line' id='LC74'><br/></div><div class='line' id='LC75'><span class="kt">void</span> <span class="nf">Backward</span> <span class="p">(</span><span class="kt">int</span> <span class="n">speed</span><span class="p">)</span></div><div class='line' id='LC76'><span class="p">{</span></div><div class='line' id='LC77'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">attachServos</span><span class="p">();</span> <span class="c1">//in case we disconnected them</span></div><div class='line' id='LC78'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC79'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">speed</span> <span class="o">=</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="p">(</span><span class="n">speed</span><span class="o">/</span><span class="mf">100.0</span><span class="o">*</span><span class="mf">90.0</span> <span class="o">+</span> <span class="mi">90</span><span class="p">)</span> <span class="p">;</span>  <span class="c1">// translates it to servo-speak (servo input is from 0-180)</span></div><div class='line' id='LC80'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">LeftWheel</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="o">-</span><span class="n">speed</span><span class="p">);</span>             </div><div class='line' id='LC81'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">RightWheel</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">speed</span><span class="p">);</span> <span class="c1">// Right wheel is backwards    </span></div><div class='line' id='LC82'><span class="p">}</span></div><div class='line' id='LC83'><br/></div><div class='line' id='LC84'><br/></div><div class='line' id='LC85'><br/></div><div class='line' id='LC86'><span class="kt">void</span> <span class="nf">Rotate</span> <span class="p">(</span><span class="kt">int</span> <span class="n">speed</span><span class="p">)</span></div><div class='line' id='LC87'><span class="p">{</span></div><div class='line' id='LC88'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">attachServos</span><span class="p">();</span> <span class="c1">//in case we disconnected them</span></div><div class='line' id='LC89'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</div><div class='line' id='LC90'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">speed</span> <span class="o">=</span> <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="p">(</span><span class="n">speed</span><span class="o">/</span><span class="mf">100.0</span><span class="o">*</span><span class="mf">90.0</span> <span class="o">+</span> <span class="mi">90</span><span class="p">)</span> <span class="p">;</span>  <span class="c1">// translates it to servo-speak (servo input is from 0-180)</span></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">LeftWheel</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">speed</span><span class="p">);</span>             </div><div class='line' id='LC92'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">RightWheel</span><span class="p">.</span><span class="n">write</span><span class="p">(</span><span class="n">speed</span><span class="p">);</span> <span class="c1">// Right wheel is backwards    </span></div><div class='line' id='LC93'><span class="p">}</span></div><div class='line' id='LC94'><br/></div><div class='line' id='LC95'><br/></div><div class='line' id='LC96'><span class="kt">void</span> <span class="nf">Stop</span><span class="p">()</span></div><div class='line' id='LC97'><span class="p">{</span></div><div class='line' id='LC98'>&nbsp;&nbsp;<span class="n">LeftWheel</span><span class="p">.</span><span class="n">detach</span><span class="p">();</span></div><div class='line' id='LC99'>&nbsp;&nbsp;<span class="n">RightWheel</span><span class="p">.</span><span class="n">detach</span><span class="p">();</span></div><div class='line' id='LC100'><span class="p">}</span></div><div class='line' id='LC101'><br/></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'><br/></div><div class='line' id='LC104'><br/></div><div class='line' id='LC105'><br/></div><div class='line' id='LC106'><br/></div><div class='line' id='LC107'><br/></div><div class='line' id='LC108'><span class="kt">void</span> <span class="nf">attachServos</span><span class="p">()</span></div><div class='line' id='LC109'><span class="p">{</span></div><div class='line' id='LC110'>&nbsp;&nbsp;&nbsp;<span class="n">LeftWheel</span><span class="p">.</span><span class="n">attach</span><span class="p">(</span><span class="n">LWPin</span><span class="p">);</span></div><div class='line' id='LC111'>&nbsp;&nbsp;&nbsp;<span class="n">RightWheel</span><span class="p">.</span><span class="n">attach</span><span class="p">(</span><span class="n">RWPin</span><span class="p">);</span></div><div class='line' id='LC112'><br/></div><div class='line' id='LC113'><span class="p">}</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

          </div>
        </div>

        <a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
        <div id="jump-to-line" style="display:none">
          <form accept-charset="UTF-8" class="js-jump-to-line-form">
            <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;">
            <button type="submit" class="button">Go</button>
          </form>
        </div>

      </div>
    </div>
</div>

<div id="js-frame-loading-template" class="frame frame-loading large-loading-area" style="display:none;">
  <img class="js-frame-loading-spinner" src="https://a248.e.akamai.net/assets.github.com/images/spinners/octocat-spinner-128.gif" height="64" width="64">
</div>


        </div>
      </div>
      <div class="modal-backdrop"></div>
    </div>

      <div id="footer-push"></div><!-- hack for sticky footer -->
    </div><!-- end of wrapper - hack for sticky footer -->

      <!-- footer -->
      <div id="footer">
  <div class="container clearfix">

      <dl class="footer_nav">
        <dt>GitHub</dt>
        <dd><a href="/about">About us</a></dd>
        <dd><a href="/blog">Blog</a></dd>
        <dd><a href="/contact">Contact &amp; support</a></dd>
        <dd><a href="http://enterprise.github.com/">GitHub Enterprise</a></dd>
        <dd><a href="http://status.github.com/">Site status</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Applications</dt>
        <dd><a href="http://mac.github.com/">GitHub for Mac</a></dd>
        <dd><a href="http://windows.github.com/">GitHub for Windows</a></dd>
        <dd><a href="http://eclipse.github.com/">GitHub for Eclipse</a></dd>
        <dd><a href="http://mobile.github.com/">GitHub mobile apps</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Services</dt>
        <dd><a href="http://get.gaug.es/">Gauges: Web analytics</a></dd>
        <dd><a href="http://speakerdeck.com">Speaker Deck: Presentations</a></dd>
        <dd><a href="https://gist.github.com">Gist: Code snippets</a></dd>
        <dd><a href="http://jobs.github.com/">Job board</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>Documentation</dt>
        <dd><a href="http://help.github.com/">GitHub Help</a></dd>
        <dd><a href="http://developer.github.com/">Developer API</a></dd>
        <dd><a href="http://github.github.com/github-flavored-markdown/">GitHub Flavored Markdown</a></dd>
        <dd><a href="http://pages.github.com/">GitHub Pages</a></dd>
      </dl>

      <dl class="footer_nav">
        <dt>More</dt>
        <dd><a href="http://training.github.com/">Training</a></dd>
        <dd><a href="/edu">Students &amp; teachers</a></dd>
        <dd><a href="http://shop.github.com">The Shop</a></dd>
        <dd><a href="/plans">Plans &amp; pricing</a></dd>
        <dd><a href="http://octodex.github.com/">The Octodex</a></dd>
      </dl>

      <hr class="footer-divider">


    <p class="right">&copy; 2013 <span title="0.07546s from fe13.rs.github.com">GitHub</span>, Inc. All rights reserved.</p>
    <a class="left" href="/">
      <span class="mega-octicon octicon-mark-github"></span>
    </a>
    <ul id="legal">
        <li><a href="/site/terms">Terms of Service</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
    </ul>

  </div><!-- /.container -->

</div><!-- /.#footer -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/gskielian/Arduino-Codes/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>

    
    <span id='server_response_time' data-time='0.07594' data-host='fe13'></span>
    
  </body>
</html>

