<!DOCTYPE html>
<!-- saved from url=(0014)http://cpp.sh/ -->
<html><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1">
<link rel="stylesheet" type="text/css" href="./Searches_For_The_Same_Letters_Contained_In_Both_Strings_files/css">
<link rel="stylesheet" type="text/css" href="./Searches_For_The_Same_Letters_Contained_In_Both_Strings_files/cpp.css">
<script async="" src="./Searches_For_The_Same_Letters_Contained_In_Both_Strings_files/analytics.js.download"></script><script>
var staticPrefix='/v03';
</script>
<script src="./Searches_For_The_Same_Letters_Contained_In_Both_Strings_files/socket_io.js.download"></script>
<title>C++ Shell</title>
<script type="text/javascript" src="./Searches_For_The_Same_Letters_Contained_In_Both_Strings_files/ace.js.download" async=""></script><style type="text/css">/*.lleo_errorSelection *::-moz-selection,
.lleo_errorSelection *::selection,
.lleo_errorSelection *::-webkit-selection {
    background-color: red !important;
    color: #fff !important;;
}*/

#lleo_dialog,
#lleo_dialog * {
    color: #000 !important;
    font: normal 13px Arial, Helvetica !important;
    line-height: 15px !important;
    margin: 0 !important;
	padding: 0 !important;
	background: none !important;
	border: none 0 !important;
	position: static !important;
	vertical-align: baseline !important;
	overflow: visible !important;
	width: auto !important;
	height: auto !important;
    max-width: none !important;
    max-height: none !important;
	float: none !important;
	visibility: visible !important;
	text-align: left !important;
    text-transform: none !important;
	border-collapse: separate !important;
	border-spacing: 2px !important;
    box-sizing: content-box !important;
    box-shadow: none !important;
    opacity: 1 !important;
    text-shadow: none !important;
    letter-spacing: normal !important;
    -webkit-filter: none !important;
    -moz-filter: none !important;
    filter: none !important;
}
#lleo_dialog *:before,
#lleo_dialog *:after {
    content: '';
}

#lleo_dialog iframe {
	height: 0 !important;
	width: 0 !important;
}

#lleo_dialog {
    position: absolute !important;
    background: #fff !important;
    border: solid 1px #ccc !important;
    padding: 7px 0 0 !important;
    left: -999px;
    top: -999px;
    width: 440px !important;
    overflow: hidden;
    display: block !important;
    z-index: 999999999 !important;
    box-shadow: 8px 16px 30px rgba(0, 0, 0, 0.16) !important;
    border-radius: 3px !important;
    opacity: 0 !important;
    -webkit-transform: translateY(15px);
    -moz-transform: translateY(15px);
    -ms-transform: translateY(15px);
    -o-transform: translateY(15px);
    transform: translateY(15px);
}
#lleo_dialog.lleo_show_small {
    width: 150px !important;
}
#lleo_dialog.lleo_show {
    opacity: 1 !important;
    -webkit-transform: translateY(0);
    -moz-transform: translateY(0);
    -ms-transform: translateY(0);
    -o-transform: translateY(0);
    transform: translateY(0);
    -webkit-transition: -webkit-transform 0.3s, opacity 0.3s !important;
    -moz-transition: -moz-transform 0.3s, opacity 0.3s !important;
    -ms-transition: -ms-transform 0.3s, opacity 0.3s !important;
    -o-transition: -o-transform 0.3s, opacity 0.3s !important;
    transition: transform 0.3s, opacity 0.3s !important;
}
#lleo_dialog.lleo_collapse {
    opacity: 0 !important;
    -webkit-transform: scale(0.25, 0.1) translate(-550px, 100px);
    -moz-transform: scale(0.25, 0.1) translate(-550px, 100px);
    -ms-transform: scale(0.25, 0.1) translate(-550px, 100px);
    -o-transform: scale(0.25, 0.1) translate(-550px, 100px);
    transform: scale(0.25, 0.1) translate(-550px, 100px);
    -webkit-transition: -webkit-transform 0.4s, opacity 0.4s !important;
    -moz-transition: -moz-transform 0.4s, opacity 0.4s !important;
    -ms-transition: -ms-transform 0.4s, opacity 0.4s !important;
    -o-transition: -o-transform 0.4s, opacity 0.4s !important;
    transition: transform 0.4s, opacity 0.4s !important;
}
#lleo_dialog input::-webkit-input-placeholder {
    color: #aaa !important;
}
#lleo_dialog .lleo_has_pic #lleo_word {
	margin-right: 80px !important;
}
#lleo_dialog #lleo_translationsContainer1 {
	position: relative !important;
}
#lleo_dialog #lleo_translationsContainer2 {
	padding: 7px 0 0 !important;
	vertical-align: middle !important;
}
#lleo_dialog #lleo_word {
    color: #000 !important;
    margin: 0 5px 2px 0 !important;
    /*float: left !important;*/
}
#lleo_dialog .lleo_has_sound #lleo_word {
    margin-left: 30px !important;
}
#lleo_dialog #lleo_text {
    font-weight: bold !important;
    color: #d56e00 !important;
    text-decoration: none !important;
    cursor: default !important;
}
/*
#lleo_dialog #lleo_text.lleo_known {
    cursor: pointer !important;
    text-decoration: underline !important;
}
*/
/*#lleo_dialog #lleo_closeBtn {
    position: absolute !important;
    right: 6px !important;
    top: 5px !important;
    line-height: 1px !important;
    text-decoration: none !important;
    font-weight: bold !important;
    font-size: 0 !important;
    color: #aaa !important;
    display: block !important;
	z-index: 9999999999 !important;
	width: 7px !important;
	height: 7px !important;
	padding: 0 !important;
	margin: 0 !important;
}*/

#lleo_dialog #lleo_optionsBtn {
    position: absolute !important; 
    right: 3px !important;
    top: 5px !important;
    line-height: 1px !important;
    text-decoration: none !important;
    font-weight: bold !important;
    font-size: 13px !important;
    color: #aaa !important;
    padding: 2px !important;
	display: none;
}
    #lleo_dialog.lleo_optionsShown #lleo_optionsBtn {
        display: block !important;
    }
    #lleo_dialog #lleo_optionsBtn img {
        width: 12px !important;
        height: 12px !important;
    }
#lleo_dialog #lleo_sound {
    float: left !important;
    width: 16px !important;
    height: 16px !important;
    margin-left: 9px !important;
    margin-right: 3px !important;
    background: 0 0 no-repeat !important;
    cursor: pointer !important;
    display: none !important;
    background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAfNJREFUeNq0U01IVFEU/u57Oo5WhBRIBBptykWLYBa2soWiEKQQEbrSFsGbVRQKQc2iFqGitXqvjQxCoCJCqyI0aBUtZILaJNUuYWYWo8HovJ/707nP94bnz0rxwvfOuefd8517fi5TSuE4i50YwZ3l37ZhNlpgzFkaaM/G9sHF1YskNrT+7l4PjMOcb78t2JL71uxgB+2UlfxHTtq5N94fIOh/88kWgWfl73ZCSQkpeGg3H091JY6dI2S00qA/N3KO3dDUYhFgEmZGurG+w9FqApIHsVM7kaTF9Nhn0r8Q7hPWQgIRuNaH3AMUA4W/Lkdh04cpFS43G0TgxQTvCdMETVAk3KynIHwXZU/ge8XDt7KH9bKLjU0P2zVO5LsEpSejVRJ9UR18EtfqKegovs9R3Q6w9c/H1o4Aa2Jwm1lIvn9RJ4w9RdRRzqcYrpwycCll4Cy1lnkS3Bc6vfBg28v8aRIfI78zhB/1GygROH3jLyyzMQ0zlUZuZBSlKkeLoegGtTjYLcJ8pF+NakHOFC2J6w+f25mxSfWrWFF/ShXVPTGvtN14NNkVnxlYWJkgZEL7/vwKr55lKSVnaGYWkuYgrgG172uUv47+U7fw0EHaJXmalUQy/HqO6lBzEsVjJC4Q8kd6TETQpjuaGOvjv8b/AgwA/ij1XMx58NIAAAAASUVORK5CYII=) !important;
}
#lleo_dialog .lleo_has_sound #lleo_sound {
    display: block !important;
}

#lleo_dialog #lleo_soundWave {
    border: solid 5px #4495CC !important;
    border-radius: 5px !important;
    position: absolute !important;
    left: -5px !important;
    top: -5px !important;
    right: -5px !important;
    bottom: -5px !important;
    z-index: 0 !important;
    opacity: 0.9 !important;
    display: none !important;
}
    #lleo_dialog #lleo_soundWave.lleo_beforePlaying {
        display: block !important;
    }
    #lleo_dialog #lleo_soundWave.lleo_playing {
        opacity: 0 !important;
        border-width: 20px !important;
        border-radius: 30px !important;

        -webkit-transform: scale(1.07,1.1) !important;
        -moz-transform: scale(1.07,1.1) !important;
        -ms-transform: scale(1.07,1.1) !important;
        transform: scale(1.07,1.1) !important;

        -webkit-transition: all 0.6s !important;
        -moz-transition: all 0.6s !important;
        -ms-transition: all 0.6s !important;
        transition: all 0.6s !important;
    }


#lleo_dialog #lleo_picOuter {
    position: absolute !important;
    float: right !important;
    top: 4px;
    right: 5px;
    z-index: 9 !important;
    display: none !important;
    width: 100px !important;
}
    #lleo_dialog.lleo_optionsShown #lleo_picOuter {
        right: 25px;
    }
#lleo_dialog .lleo_has_pic #lleo_picOuter {
    display: block !important;
}
    #lleo_dialog #lleo_picOuter:hover {
        width: auto !important;
        z-index: 11 !important;
    }
#lleo_dialog #lleo_pic,
#lleo_dialog #lleo_picBig {
    position: absolute !important;
    top: 0 !important;
    right: 0 !important;
    border: solid 2px #fff !important;
    -webkit-border-radius: 2px !important;
    -moz-border-radius: 2px !important;
	border-radius: 2px !important;
    z-index: 1 !important;
}
#lleo_dialog #lleo_pic {
	position: relative !important;
    border: none !important;
	width: 30px !important;
}
#lleo_dialog #lleo_picBig {
    box-shadow: -1px 2px 4px rgba(0,0,0,0.3);
    z-index: 2 !important;
    opacity: 0 !important;
    visibility: hidden !important;
}
    #lleo_dialog #lleo_picOuter:hover #lleo_picBig {
        visibility: visible !important;
        opacity: 1 !important;
        -webkit-transition: opacity 0.3s !important;
        -webkit-transition-delay: 0.3s !important;
    }
#lleo_dialog #lleo_transcription {
    margin: 0 80px 4px 31px !important;
    color: #aaaaaa !important;
}
#lleo_dialog .lleo_no_trans {
    color: #aaa !important;
}

#lleo_dialog .ll-translation-counter {
	float: right !important;
    font-size: 11px !important;
    color: #aaa !important;
    padding: 2px 2px 1px 10px !important;
}

#lleo_dialog .ll-translation-text {
	float: left !important;
	/*width: 80% !important;*/
}

#lleo_dialog #lleo_trans a {
    color: #3F669F !important;
    text-decoration: none !important;
    text-overflow: ellipsis !important;
    padding: 1px 4px !important;
    overflow: hidden !important;
    float: left !important;
    width: 320px !important;
}

#lleo_dialog .ll-translation-item {
    color: #3F669F !important;
    border: solid 1px #fff !important;
    padding: 3px !important;
    width: 100% !important;
    float: left !important;
	-moz-border-radius: 2px !important;
	-webkit-border-radius: 2px !important;
	border-radius: 2px !important;
}

#lleo_dialog .ll-translation-item:hover {
	border: solid 1px #9FC2C9 !important;
    background: #EDF4F6 !important;
	cursor: pointer !important;
}
#lleo_dialog .ll-translation-item:hover .ll-translation-counter {
	color: #83a0a6 !important;
}

#lleo_dialog .ll-translation-marker {
    background: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAQAAAAECAYAAACp8Z5+AAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAAJcEhZcwAADsQAAA7EAZUrDhsAAAAWSURBVBhXY7RPm/+fAQkwIXNAbMICAJQ8AkvqWg/SAAAAAElFTkSuQmCC) !important;
    display: inline-block !important;
    width: 4px !important;
    height: 4px !important;
    margin: 7px 5px 2px 2px !important;
    float: left !important;
}

#lleo_dialog #lleo_icons {
    color: #aaa !important;
    font-size: 11px !important;
    background: #f8f8f8 !important;
    padding: 10px 10px 10px 16px !important;
}
#lleo_icons a {
    display: inline-block !important;
    width: 16px !important;
    height: 16px !important;
    margin: 0 10px -4px 3px !important;
    text-decoration: none !important;
    opacity: 0.5 !important;
    background: url(data:image/png;base64,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) !important;
}
#lleo_icons a:hover {
    opacity: 1 !important;
}
#lleo_icons a.lleo_google     {background-position:-34px 0 !important;}
#lleo_icons a.lleo_multitran  {background-position:-64px 0 !important;}
#lleo_icons a.lleo_lingvo     {background-position:-51px 0 !important; width: 12px !important;}
#lleo_icons a.lleo_dict       {background-position:-17px 0 !important;}
#lleo_icons a.lleo_linguee    {background-position:-81px 0 !important;}
#lleo_icons a.lleo_michaelis  {background-position:-98px 0 !important;}

#lleo_dialog #lleo_contextContainer {
    margin: 0 !important;
    padding: 3px 15px 8px 10px !important;
    background: #eee !important;
    background: -webkit-gradient(linear, left top, left bottom, from(#fff), to(#eee)) !important;
    background: -moz-linear-gradient(-90deg, #fff, #eee) !important;
    border-bottom: solid 1px #ddd !important;
    border-top-left-radius: 3px !important;
    border-top-right-radius: 3px !important;
    display: none !important;
    overflow: hidden !important;
}
#lleo_dialog .lleo_has_context #lleo_contextContainer {
    display: block !important;
}
#lleo_dialog #lleo_context {
    color: #444 !important;
    text-shadow: 1px 1px 0 #f4f4f4 !important;
    line-height: 12px !important;
    font-size: 11px !important;
    margin-left: 2px !important;
}
#lleo_dialog #lleo_context b {
    line-height: 12px !important;
    color: #000 !important;
    font-weight: bold !important;
    font-size: 11px !important;
}
/*#lleo_dialog #lleo_gBrand {
    color: #aaa !important;
    font-size: 10px !important;
    *//*padding-right: 52px !important;*//*
    padding-bottom: 14px !important;
    margin: -3px 4px 0 4px !important;
    background: left bottom url(data:image/png;base64,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) no-repeat !important;
    display: inline-block !important;
    float: right !important;
}
#lleo_dialog #lleo_gBrand.hidden {
    display: none !important;
}*/
#lleo_dialog #lleo_translateContextLink {
    color: #444 !important;
    text-shadow: 1px 1px 0 #f4f4f4 !important;
    background: -webkit-gradient(linear, left top, left bottom, from(#f4f4f4), to(#ddd)) !important;
    background: -moz-linear-gradient(-90deg, #f4f4f4, #ddd) !important;
    border: solid 1px !important;
    box-shadow: 1px 1px 0 #f6f6f6 !important;
    border-color: #999 #aaa #aaa #999 !important;
    -moz-border-radius: 2px !important;
	-webkit-border-radius: 2px !important;
	border-radius: 2px !important;
    padding: 0 3px !important;
    font-size: 11px !important;
    text-decoration: none !important;
    margin: 1px 5px 0 !important;
    display: inline-block !important;
    white-space: nowrap !important;
}
#lleo_dialog #lleo_translateContextLink:hover {
    background: #f8f8f8 !important;
}
#lleo_dialog #lleo_translateContextLink.hidden {
    visibility: hidden !important;
}

#lleo_dialog #lleo_setTransForm {
    display: block !important;
    margin-top: 3px !important;
    padding-top: 5px !important;
    /* Set position and background because the form might be overlapped by an image when no translations */
    position: relative !important;
    background: #fff !important;
    z-index: 10 !important;
    padding-bottom: 10px !important;
    padding-left: 16px !important;
}
#lleo_dialog .lleo-custom-translation {
    padding: 4px 5px !important;
    border: solid 1px #ddd !important;
	border-radius: 2px !important;
    width: 90% !important;
    min-width: 270px !important;
    background: -webkit-gradient(linear, 0 0, 0 20, from(#f1f1f1), to(#fff)) !important;
    background: -moz-linear-gradient(-90deg, #f1f1f1, #fff) !important;
	font: normal 13px Arial, Helvetica !important;
	line-height: 15px !important;
}
#lleo_dialog .lleo-custom-translation:hover {
    border: solid 1px #aaa !important;
}
#lleo_dialog .lleo-custom-translation:focus {
    background: #FFFEC9 !important;
}

#lleo_dialog *.hidden {
    display: none !important;
}

#lleo_dialog .infinitive{
    color: #D56E00 !important;
    text-decoration: none;
    border-bottom: 1px dotted #D56E00 !important;
}
#lleo_dialog .infinitive:hover{
    border: none !important;
}

#lleo_dialog .lleo_separator {
    height: 1px !important;
    background: #eee;
    margin-top: 10px !important;
    background: -webkit-linear-gradient(left, rgba(255,255,255,1) 0%,#eee 8%,rgba(255,255,255,1) 80%) !important;
    background: -moz-linear-gradient(left, rgba(255,255,255,1) 0%, #eee 8%, rgba(255,255,255,1) 80%) !important;
    background: -ms-linear-gradient(left, rgba(255,255,255,1) 0%,#eee 8%,rgba(255,255,255,1) 80%) !important;
    background: linear-gradient(to right, rgba(255,255,255,1) 0%,#eee 8%,rgba(255,255,255,1) 80%) !important;
}
#lleo_dialog #lleo_trans {
    /*border-top: 1px solid #eeeeee !important;*/
    padding: 5px 30px 0 14px !important;
    zoom: 1;
}

#lleo_dialog .lleo_clearfix {
	display: block !important;
	clear: both !important;
	visibility: hidden !important;
	height: 0 !important;
	font-size: 0 !important;
}


#lleo_dialog #lleo_picOuter table {
    width: 44px !important;
    position: absolute !important;
    right: 0 !important;
    top: 0 !important;
    vertical-align: middle !important;
}

#lleo_dialog #lleo_picOuter td {
    width: 38px !important;
    height: 38px !important;
    /*border: 1px solid #eeeeee !important;*/
    vertical-align: middle !important;
    text-align: center !important;
}

#lleo_dialog #lleo_picOuter td div {
	height: 38px !important;
	overflow: hidden !important;
}

#lleo_dialog .lleo_empty {
    margin: 0 5px 7px !important;
}

#lleo_youtubeExportBtn {
    margin-left: 10px;
    height: 24px;
}
    #lleo_youtubeExportBtn i {
        display: inline-block;
        width: 16px;
        height: 16px;
        background: 0 0 url(https://d144fqpiyasmrr.cloudfront.net/plugins/all/images/i16.png) !important;
    }
    #lleo_youtubeExportBtn .yt-uix-button-content {
        font-size: 12px;
        line-height: 2px;
    }


/*** Parsed Lyrics Content *****************************/

.lleo_lyrics tran {
    background: transparent !important;
    border-radius: 2px !important;
    text-shadow: none !important;
    cursor: pointer !important;
}
    .lleo_lyrics tran:hover {
        color: #fff !important;
        background: #C77213 !important;
        -webkit-transition: all 0.1s !important;
        -moz-transition: all 0.1s !important;
        -ms-transition: all 0.1s !important;
        -o-transition: all 0.1s !important;
        transition: all 0.1s !important;
    }

.lleo_songName {
    border: solid 1px #ffd47c;
    background: #fff1c2;
    border-radius: 2px;
}

.lleo_hidden_iframe {
    visibility: hidden;
}</style><style id="ace_editor">.ace_editor {position: relative;overflow: hidden;font-family: 'Monaco', 'Menlo', 'Ubuntu Mono', 'Consolas', 'source-code-pro', monospace;font-size: 12px;line-height: normal;direction: ltr;}.ace_scroller {position: absolute;overflow: hidden;top: 0;bottom: 0;background-color: inherit;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;}.ace_content {position: absolute;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;cursor: text;min-width: 100%;}.ace_dragging, .ace_dragging * {cursor: move !important;}.ace_dragging .ace_scroller:before{position: absolute;top: 0;left: 0;right: 0;bottom: 0;content: '';background: rgba(250, 250, 250, 0.01);z-index: 1000;}.ace_dragging.ace_dark .ace_scroller:before{background: rgba(0, 0, 0, 0.01);}.ace_selecting, .ace_selecting * {cursor: text !important;}.ace_gutter {position: absolute;overflow : hidden;width: auto;top: 0;bottom: 0;left: 0;cursor: default;z-index: 4;-ms-user-select: none;-moz-user-select: none;-webkit-user-select: none;user-select: none;}.ace_gutter-active-line {position: absolute;left: 0;right: 0;}.ace_scroller.ace_scroll-left {box-shadow: 17px 0 16px -16px rgba(0, 0, 0, 0.4) inset;}.ace_gutter-cell {padding-left: 19px;padding-right: 6px;background-repeat: no-repeat;}.ace_gutter-cell.ace_error {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAABOFBMVEX/////////QRswFAb/Ui4wFAYwFAYwFAaWGAfDRymzOSH/PxswFAb/SiUwFAYwFAbUPRvjQiDllog5HhHdRybsTi3/Tyv9Tir+Syj/UC3////XurebMBIwFAb/RSHbPx/gUzfdwL3kzMivKBAwFAbbvbnhPx66NhowFAYwFAaZJg8wFAaxKBDZurf/RB6mMxb/SCMwFAYwFAbxQB3+RB4wFAb/Qhy4Oh+4QifbNRcwFAYwFAYwFAb/QRzdNhgwFAYwFAbav7v/Uy7oaE68MBK5LxLewr/r2NXewLswFAaxJw4wFAbkPRy2PyYwFAaxKhLm1tMwFAazPiQwFAaUGAb/QBrfOx3bvrv/VC/maE4wFAbRPBq6MRO8Qynew8Dp2tjfwb0wFAbx6eju5+by6uns4uH9/f36+vr/GkHjAAAAYnRSTlMAGt+64rnWu/bo8eAA4InH3+DwoN7j4eLi4xP99Nfg4+b+/u9B/eDs1MD1mO7+4PHg2MXa347g7vDizMLN4eG+Pv7i5evs/v79yu7S3/DV7/498Yv24eH+4ufQ3Ozu/v7+y13sRqwAAADLSURBVHjaZc/XDsFgGIBhtDrshlitmk2IrbHFqL2pvXf/+78DPokj7+Fz9qpU/9UXJIlhmPaTaQ6QPaz0mm+5gwkgovcV6GZzd5JtCQwgsxoHOvJO15kleRLAnMgHFIESUEPmawB9ngmelTtipwwfASilxOLyiV5UVUyVAfbG0cCPHig+GBkzAENHS0AstVF6bacZIOzgLmxsHbt2OecNgJC83JERmePUYq8ARGkJx6XtFsdddBQgZE2nPR6CICZhawjA4Fb/chv+399kfR+MMMDGOQAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: 2px center;}.ace_gutter-cell.ace_warning {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAMAAAAoLQ9TAAAAmVBMVEX///8AAAD///8AAAAAAABPSzb/5sAAAAB/blH/73z/ulkAAAAAAAD85pkAAAAAAAACAgP/vGz/rkDerGbGrV7/pkQICAf////e0IsAAAD/oED/qTvhrnUAAAD/yHD/njcAAADuv2r/nz//oTj/p064oGf/zHAAAAA9Nir/tFIAAAD/tlTiuWf/tkIAAACynXEAAAAAAAAtIRW7zBpBAAAAM3RSTlMAABR1m7RXO8Ln31Z36zT+neXe5OzooRDfn+TZ4p3h2hTf4t3k3ucyrN1K5+Xaks52Sfs9CXgrAAAAjklEQVR42o3PbQ+CIBQFYEwboPhSYgoYunIqqLn6/z8uYdH8Vmdnu9vz4WwXgN/xTPRD2+sgOcZjsge/whXZgUaYYvT8QnuJaUrjrHUQreGczuEafQCO/SJTufTbroWsPgsllVhq3wJEk2jUSzX3CUEDJC84707djRc5MTAQxoLgupWRwW6UB5fS++NV8AbOZgnsC7BpEAAAAABJRU5ErkJggg==");background-position: 2px center;}.ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAAAAAA6mKC9AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAAJ0Uk5TAAB2k804AAAAPklEQVQY02NgIB68QuO3tiLznjAwpKTgNyDbMegwisCHZUETUZV0ZqOquBpXj2rtnpSJT1AEnnRmL2OgGgAAIKkRQap2htgAAAAASUVORK5CYII=");background-position: 2px center;}.ace_dark .ace_gutter-cell.ace_info {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQBAMAAADt3eJSAAAAJFBMVEUAAAChoaGAgIAqKiq+vr6tra1ZWVmUlJSbm5s8PDxubm56enrdgzg3AAAAAXRSTlMAQObYZgAAAClJREFUeNpjYMAPdsMYHegyJZFQBlsUlMFVCWUYKkAZMxZAGdxlDMQBAG+TBP4B6RyJAAAAAElFTkSuQmCC");}.ace_scrollbar {position: absolute;right: 0;bottom: 0;z-index: 6;}.ace_scrollbar-inner {position: absolute;cursor: text;left: 0;top: 0;}.ace_scrollbar-v{overflow-x: hidden;overflow-y: scroll;top: 0;}.ace_scrollbar-h {overflow-x: scroll;overflow-y: hidden;left: 0;}.ace_print-margin {position: absolute;height: 100%;}.ace_text-input {position: absolute;z-index: 0;width: 0.5em;height: 1em;opacity: 0;background: transparent;-moz-appearance: none;appearance: none;border: none;resize: none;outline: none;overflow: hidden;font: inherit;padding: 0 1px;margin: 0 -1px;text-indent: -1em;-ms-user-select: text;-moz-user-select: text;-webkit-user-select: text;user-select: text;}.ace_text-input.ace_composition {background: #f8f8f8;color: #111;z-index: 1000;opacity: 1;text-indent: 0;}.ace_layer {z-index: 1;position: absolute;overflow: hidden;white-space: pre;height: 100%;width: 100%;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;/* setting pointer-events: auto; on node under the mouse, which changesduring scroll, will break mouse wheel scrolling in Safari */pointer-events: none;}.ace_gutter-layer {position: relative;width: auto;text-align: right;pointer-events: auto;}.ace_text-layer {font: inherit !important;}.ace_cjk {display: inline-block;text-align: center;}.ace_cursor-layer {z-index: 4;}.ace_cursor {z-index: 4;position: absolute;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;border-left: 2px solid}.ace_slim-cursors .ace_cursor {border-left-width: 1px;}.ace_overwrite-cursors .ace_cursor {border-left-width: 0px;border-bottom: 1px solid;}.ace_hidden-cursors .ace_cursor {opacity: 0.2;}.ace_smooth-blinking .ace_cursor {-moz-transition: opacity 0.18s;-webkit-transition: opacity 0.18s;-o-transition: opacity 0.18s;-ms-transition: opacity 0.18s;transition: opacity 0.18s;}.ace_editor.ace_multiselect .ace_cursor {border-left-width: 1px;}.ace_marker-layer .ace_step, .ace_marker-layer .ace_stack {position: absolute;z-index: 3;}.ace_marker-layer .ace_selection {position: absolute;z-index: 5;}.ace_marker-layer .ace_bracket {position: absolute;z-index: 6;}.ace_marker-layer .ace_active-line {position: absolute;z-index: 2;}.ace_marker-layer .ace_selected-word {position: absolute;z-index: 4;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;}.ace_line .ace_fold {-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;display: inline-block;height: 11px;margin-top: -2px;vertical-align: middle;background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACJJREFUeNpi+P//fxgTAwPDBxDxD078RSX+YeEyDFMCIMAAI3INmXiwf2YAAAAASUVORK5CYII=");background-repeat: no-repeat, repeat-x;background-position: center center, top left;color: transparent;border: 1px solid black;-moz-border-radius: 2px;-webkit-border-radius: 2px;border-radius: 2px;cursor: pointer;pointer-events: auto;}.ace_dark .ace_fold {}.ace_fold:hover{background-image:url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABEAAAAJCAYAAADU6McMAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAAJpJREFUeNpi/P//PwOlgAXGYGRklAVSokD8GmjwY1wasKljQpYACtpCFeADcHVQfQyMQAwzwAZI3wJKvCLkfKBaMSClBlR7BOQikCFGQEErIH0VqkabiGCAqwUadAzZJRxQr/0gwiXIal8zQQPnNVTgJ1TdawL0T5gBIP1MUJNhBv2HKoQHHjqNrA4WO4zY0glyNKLT2KIfIMAAQsdgGiXvgnYAAAAASUVORK5CYII="),url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAA3CAYAAADNNiA5AAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAACBJREFUeNpi+P//fz4TAwPDZxDxD5X4i5fLMEwJgAADAEPVDbjNw87ZAAAAAElFTkSuQmCC");}.ace_tooltip {background-color: #FFF;background-image: -webkit-linear-gradient(top, transparent, rgba(0, 0, 0, 0.1));background-image: linear-gradient(to bottom, transparent, rgba(0, 0, 0, 0.1));border: 1px solid gray;border-radius: 1px;box-shadow: 0 1px 2px rgba(0, 0, 0, 0.3);color: black;display: block;max-width: 100%;padding: 3px 4px;position: fixed;z-index: 999999;-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;cursor: default;white-space: pre;word-wrap: break-word;line-height: normal;font-style: normal;font-weight: normal;letter-spacing: normal;pointer-events: none;}.ace_folding-enabled > .ace_gutter-cell {padding-right: 13px;}.ace_fold-widget {-moz-box-sizing: border-box;-webkit-box-sizing: border-box;box-sizing: border-box;margin: 0 -12px 0 1px;display: none;width: 11px;vertical-align: top;background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42mWKsQ0AMAzC8ixLlrzQjzmBiEjp0A6WwBCSPgKAXoLkqSot7nN3yMwR7pZ32NzpKkVoDBUxKAAAAABJRU5ErkJggg==");background-repeat: no-repeat;background-position: center;border-radius: 3px;border: 1px solid transparent;cursor: pointer;}.ace_folding-enabled .ace_fold-widget {display: inline-block;   }.ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAANElEQVR42m3HwQkAMAhD0YzsRchFKI7sAikeWkrxwScEB0nh5e7KTPWimZki4tYfVbX+MNl4pyZXejUO1QAAAABJRU5ErkJggg==");}.ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAGCAYAAAAG5SQMAAAAOUlEQVR42jXKwQkAMAgDwKwqKD4EwQ26sSOkVWjgIIHAzPiCgaqiqnJHZnKICBERHN194O5b9vbLuAVRL+l0YWnZAAAAAElFTkSuQmCCXA==");}.ace_fold-widget:hover {border: 1px solid rgba(0, 0, 0, 0.3);background-color: rgba(255, 255, 255, 0.2);-moz-box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);-webkit-box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.7);}.ace_fold-widget:active {border: 1px solid rgba(0, 0, 0, 0.4);background-color: rgba(0, 0, 0, 0.05);-moz-box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);-webkit-box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.8);}/*** Dark version for fold widgets*/.ace_dark .ace_fold-widget {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAHklEQVQIW2P4//8/AzoGEQ7oGCaLLAhWiSwB146BAQCSTPYocqT0AAAAAElFTkSuQmCC");}.ace_dark .ace_fold-widget.ace_end {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAUAAAAFCAYAAACNbyblAAAAH0lEQVQIW2P4//8/AxQ7wNjIAjDMgC4AxjCVKBirIAAF0kz2rlhxpAAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget.ace_closed {background-image: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAMAAAAFCAYAAACAcVaiAAAAHElEQVQIW2P4//+/AxAzgDADlOOAznHAKgPWAwARji8UIDTfQQAAAABJRU5ErkJggg==");}.ace_dark .ace_fold-widget:hover {box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);background-color: rgba(255, 255, 255, 0.1);}.ace_dark .ace_fold-widget:active {-moz-box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);-webkit-box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);box-shadow: 0 1px 1px rgba(255, 255, 255, 0.2);}.ace_fold-widget.ace_invalid {background-color: #FFB4B4;border-color: #DE5555;}.ace_fade-fold-widgets .ace_fold-widget {-moz-transition: opacity 0.4s ease 0.05s;-webkit-transition: opacity 0.4s ease 0.05s;-o-transition: opacity 0.4s ease 0.05s;-ms-transition: opacity 0.4s ease 0.05s;transition: opacity 0.4s ease 0.05s;opacity: 0;}.ace_fade-fold-widgets:hover .ace_fold-widget {-moz-transition: opacity 0.05s ease 0.05s;-webkit-transition: opacity 0.05s ease 0.05s;-o-transition: opacity 0.05s ease 0.05s;-ms-transition: opacity 0.05s ease 0.05s;transition: opacity 0.05s ease 0.05s;opacity:1;}.ace_underline {text-decoration: underline;}.ace_bold {font-weight: bold;}.ace_nobold .ace_bold {font-weight: normal;}.ace_italic {font-style: italic;}.ace_error-marker {background-color: rgba(255, 0, 0,0.2);position: absolute;z-index: 9;}.ace_highlight-marker {background-color: rgba(255, 255, 0,0.2);position: absolute;z-index: 8;}</style><style id="ace-tm">.ace-tm .ace_gutter {background: #f0f0f0;color: #333;}.ace-tm .ace_print-margin {width: 1px;background: #e8e8e8;}.ace-tm .ace_fold {background-color: #6B72E6;}.ace-tm {background-color: #FFFFFF;color: black;}.ace-tm .ace_cursor {color: black;}.ace-tm .ace_invisible {color: rgb(191, 191, 191);}.ace-tm .ace_storage,.ace-tm .ace_keyword {color: blue;}.ace-tm .ace_constant {color: rgb(197, 6, 11);}.ace-tm .ace_constant.ace_buildin {color: rgb(88, 72, 246);}.ace-tm .ace_constant.ace_language {color: rgb(88, 92, 246);}.ace-tm .ace_constant.ace_library {color: rgb(6, 150, 14);}.ace-tm .ace_invalid {background-color: rgba(255, 0, 0, 0.1);color: red;}.ace-tm .ace_support.ace_function {color: rgb(60, 76, 114);}.ace-tm .ace_support.ace_constant {color: rgb(6, 150, 14);}.ace-tm .ace_support.ace_type,.ace-tm .ace_support.ace_class {color: rgb(109, 121, 222);}.ace-tm .ace_keyword.ace_operator {color: rgb(104, 118, 135);}.ace-tm .ace_string {color: rgb(3, 106, 7);}.ace-tm .ace_comment {color: rgb(76, 136, 107);}.ace-tm .ace_comment.ace_doc {color: rgb(0, 102, 255);}.ace-tm .ace_comment.ace_doc.ace_tag {color: rgb(128, 159, 191);}.ace-tm .ace_constant.ace_numeric {color: rgb(0, 0, 205);}.ace-tm .ace_variable {color: rgb(49, 132, 149);}.ace-tm .ace_xml-pe {color: rgb(104, 104, 91);}.ace-tm .ace_entity.ace_name.ace_function {color: #0000A2;}.ace-tm .ace_heading {color: rgb(12, 7, 255);}.ace-tm .ace_list {color:rgb(185, 6, 144);}.ace-tm .ace_meta.ace_tag {color:rgb(0, 22, 142);}.ace-tm .ace_string.ace_regex {color: rgb(255, 0, 0)}.ace-tm .ace_marker-layer .ace_selection {background: rgb(181, 213, 255);}.ace-tm.ace_multiselect .ace_selection.ace_start {box-shadow: 0 0 3px 0px white;border-radius: 2px;}.ace-tm .ace_marker-layer .ace_step {background: rgb(252, 255, 0);}.ace-tm .ace_marker-layer .ace_stack {background: rgb(164, 229, 101);}.ace-tm .ace_marker-layer .ace_bracket {margin: -1px 0 0 -1px;border: 1px solid rgb(192, 192, 192);}.ace-tm .ace_marker-layer .ace_active-line {background: rgba(0, 0, 0, 0.07);}.ace-tm .ace_gutter-active-line {background-color : #dcdcdc;}.ace-tm .ace_marker-layer .ace_selected-word {background: rgb(250, 250, 255);border: 1px solid rgb(200, 200, 250);}.ace-tm .ace_indent-guide {background: url("data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAAEAAAACCAYAAACZgbYnAAAAE0lEQVQImWP4////f4bLly//BwAmVgd1/w11/gAAAABJRU5ErkJggg==") right repeat-y;}</style><style>    .error_widget_wrapper {        background: inherit;        color: inherit;        border:none    }    .error_widget {        border-top: solid 2px;        border-bottom: solid 2px;        margin: 5px 0;        padding: 10px 40px;        white-space: pre-wrap;    }    .error_widget.ace_error, .error_widget_arrow.ace_error{        border-color: #ff5a5a    }    .error_widget.ace_warning, .error_widget_arrow.ace_warning{        border-color: #F1D817    }    .error_widget.ace_info, .error_widget_arrow.ace_info{        border-color: #5a5a5a    }    .error_widget.ace_ok, .error_widget_arrow.ace_ok{        border-color: #5aaa5a    }    .error_widget_arrow {        position: absolute;        border: solid 5px;        border-top-color: transparent!important;        border-right-color: transparent!important;        border-left-color: transparent!important;        top: -5px;    }</style></head>
<body class="vsc-initialized">
<div id="header">
<div id="logo">
<h1><a href="http://cpp.sh/">C++ shell</a></h1>
</div>
<div id="motto">
<h2><a href="http://cpp.sh/">cpp.sh</a></h2>
online C++ compiler
</div>
</div>

<div id="bar">
<a href="http://cpp.sh/v03/about.html">about cpp.sh</a>
</div>

<div id="wrap">
<div id="compiler" class="comped" style="width: 1279px;"><div class="top"><div class="EditorWait" style="position: absolute; top: 0px; left: 0px; width: 100%; height: 100%; overflow: hidden; z-index: 99; background-color: rgba(224, 224, 224, 0.5); display: none;"><div style="position: absolute; top: 0px; left: 0px; bottom: 0px; right: 0px; margin: auto; height: 64px; width: 70%; text-align: center;"><h3>Program running</h3><div style="position: relative; width: 220px; height: 20px; margin: auto; visibility: hidden;"><div style="width: 21px; height: 20px; position: absolute; left: 0px; opacity: 0.15;"></div><div style="width: 21px; height: 20px; position: absolute; left: 22px; opacity: 0.15;"></div><div style="width: 21px; height: 20px; position: absolute; left: 44px; opacity: 0.15; background-color: rgb(255, 128, 0);"></div><div style="width: 21px; height: 20px; position: absolute; left: 66px; opacity: 0.25; background-color: rgb(255, 128, 0);"></div><div style="width: 21px; height: 20px; position: absolute; left: 88px; opacity: 0.35; background-color: rgb(255, 128, 0);"></div><div style="width: 21px; height: 20px; position: absolute; left: 110px; opacity: 0.45; background-color: rgb(255, 128, 0);"></div><div style="width: 21px; height: 20px; position: absolute; left: 132px; opacity: 0.55; background-color: rgb(255, 128, 0);"></div><div style="width: 21px; height: 20px; position: absolute; left: 154px; opacity: 0.65; background-color: rgb(255, 128, 0);"></div><div style="width: 21px; height: 20px; position: absolute; left: 176px; opacity: 0.95; background-color: rgb(255, 128, 0);"></div><div style="width: 21px; height: 20px; position: absolute; left: 198px; opacity: 0.85; background-color: rgb(255, 128, 0);"></div></div><b></b></div></div><div style="height: 369px;" class=" ace_editor ace-tm ace_focus" draggable="false"><textarea class="ace_text-input" wrap="off" autocapitalize="off" spellcheck="false" style="opacity: 0; height: 17.2727px; width: 7.99716px; right: 1149.03px; bottom: 351.273px;"></textarea><div class="ace_gutter"><div class="ace_layer ace_gutter-layer ace_folding-enabled" style="margin-top: -16.8182px; height: 403.545px; width: 49px;"><div class="ace_gutter-cell " style="height: 17.2727px;">13</div><div class="ace_gutter-cell " style="height: 17.2727px;">14</div><div class="ace_gutter-cell " style="height: 17.2727px;">15</div><div class="ace_gutter-cell " style="height: 17.2727px;">16</div><div class="ace_gutter-cell " style="height: 17.2727px;">17<span class="ace_fold-widget ace_start ace_open" style="height: 17.2727px;"></span></div><div class="ace_gutter-cell " style="height: 17.2727px;">18<span class="ace_fold-widget ace_start ace_open" style="height: 17.2727px;"></span></div><div class="ace_gutter-cell " style="height: 17.2727px;">19<span class="ace_fold-widget ace_start ace_open" style="height: 17.2727px;"></span></div><div class="ace_gutter-cell " style="height: 17.2727px;">20</div><div class="ace_gutter-cell " style="height: 17.2727px;">21</div><div class="ace_gutter-cell " style="height: 17.2727px;">22</div><div class="ace_gutter-cell " style="height: 17.2727px;">23</div><div class="ace_gutter-cell " style="height: 17.2727px;">24</div><div class="ace_gutter-cell " style="height: 17.2727px;">25</div><div class="ace_gutter-cell " style="height: 17.2727px;">26</div><div class="ace_gutter-cell " style="height: 17.2727px;">27</div><div class="ace_gutter-cell " style="height: 17.2727px;">28</div><div class="ace_gutter-cell " style="height: 17.2727px;">29<span class="ace_fold-widget ace_start ace_open" style="height: 17.2727px;"></span></div><div class="ace_gutter-cell " style="height: 17.2727px;">30</div><div class="ace_gutter-cell " style="height: 17.2727px;">31</div><div class="ace_gutter-cell " style="height: 17.2727px;">32</div><div class="ace_gutter-cell " style="height: 17.2727px;">33</div><div class="ace_gutter-cell " style="height: 17.2727px;">34</div><div class="ace_gutter-cell " style="height: 17.2727px;">35</div><div class="ace_gutter-cell " style="height: 17.2727px;">36</div></div><div class="ace_gutter-active-line" style="top: 0.454575px; height: 17.2727px;"></div></div><div class="ace_scroller" style="left: 49px; right: 15px; bottom: 0px;"><div class="ace_content" style="margin-top: -16.8182px; width: 1210px; height: 403.545px; margin-left: 0px;"><div class="ace_layer ace_print-margin-layer"><div class="ace_print-margin" style="left: 643.773px; visibility: hidden;"></div></div><div class="ace_layer ace_marker-layer"><div class="ace_active-line" style="height:17.27272605895996px;top:17.27272605895996px;left:0;right:0;"></div></div><div class="ace_layer ace_text-layer" style="padding: 0px 4px;"><div class="ace_line" style="height:17.27272605895996px"><span class="ace_indent-guide">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="ace_indent-guide">&nbsp;&nbsp;&nbsp;&nbsp;</span>&nbsp;<span class="ace_identifier">t</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">push_back</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">s2</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">])</span><span class="ace_punctuation ace_operator">;</span>&nbsp;&nbsp;&nbsp;</div><div class="ace_line" style="height:17.27272605895996px"><span class="ace_indent-guide">&nbsp;&nbsp;&nbsp;&nbsp;</span>&nbsp;&nbsp;&nbsp;<span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height:17.27272605895996px"><span class="ace_indent-guide">&nbsp;&nbsp;&nbsp;&nbsp;</span>&nbsp;<span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height:17.27272605895996px">&nbsp;&nbsp;<span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height:17.27272605895996px">&nbsp;&nbsp;<span class="ace_keyword ace_control">else</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height:17.27272605895996px"><span class="ace_indent-guide">&nbsp;&nbsp;&nbsp;&nbsp;</span>&nbsp;<span class="ace_keyword ace_control">for</span><span class="ace_paren ace_lparen">(</span><span class="ace_storage ace_type">unsigned</span>&nbsp;<span class="ace_storage ace_type">int</span>&nbsp;<span class="ace_identifier">i</span>&nbsp;<span class="ace_keyword ace_operator">=</span>&nbsp;<span class="ace_constant ace_numeric">0</span><span class="ace_punctuation ace_operator">;</span>&nbsp;<span class="ace_identifier">i</span>&nbsp;<span class="ace_keyword ace_operator">&lt;=</span>&nbsp;<span class="ace_identifier">s1</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">length</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span>&nbsp;<span class="ace_keyword ace_operator">++</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height:17.27272605895996px"><span class="ace_indent-guide">&nbsp;&nbsp;&nbsp;&nbsp;</span>&nbsp;&nbsp;&nbsp;<span class="ace_keyword ace_control">if</span><span class="ace_paren ace_lparen">(</span>&nbsp;&nbsp;<span class="ace_paren ace_lparen">(</span><span class="ace_identifier">t</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">find</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">s1</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">])</span>&nbsp;<span class="ace_keyword ace_operator">&gt;</span>&nbsp;<span class="ace_identifier">s1</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">length</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span>&nbsp;<span class="ace_paren ace_rparen">)</span>&nbsp;<span class="ace_keyword ace_operator">&amp;&amp;</span>&nbsp;<span class="ace_paren ace_lparen">(</span><span class="ace_identifier">s2</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">find</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">s1</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">])</span>&nbsp;<span class="ace_keyword ace_operator">&lt;=</span>&nbsp;<span class="ace_identifier">s1</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">length</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">))</span>&nbsp;<span class="ace_paren ace_rparen">)</span><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height:17.27272605895996px"><span class="ace_indent-guide">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="ace_indent-guide">&nbsp;&nbsp;&nbsp;&nbsp;</span>&nbsp;<span class="ace_identifier">t</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">push_back</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">s1</span><span class="ace_paren ace_lparen">[</span><span class="ace_identifier">i</span><span class="ace_paren ace_rparen">])</span><span class="ace_punctuation ace_operator">;</span>&nbsp;&nbsp;&nbsp;</div><div class="ace_line" style="height:17.27272605895996px"><span class="ace_indent-guide">&nbsp;&nbsp;&nbsp;&nbsp;</span>&nbsp;&nbsp;&nbsp;<span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height:17.27272605895996px"><span class="ace_indent-guide">&nbsp;&nbsp;&nbsp;&nbsp;</span>&nbsp;<span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height:17.27272605895996px">&nbsp;&nbsp;<span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height:17.27272605895996px">&nbsp;&nbsp;</div><div class="ace_line" style="height:17.27272605895996px">&nbsp;&nbsp;<span class="ace_keyword ace_control">return</span>&nbsp;<span class="ace_identifier">t</span><span class="ace_punctuation ace_operator">.</span><span class="ace_identifier">length</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height:17.27272605895996px"><span class="ace_paren ace_rparen">}</span></div><div class="ace_line" style="height:17.27272605895996px"></div><div class="ace_line" style="height:17.27272605895996px"><span class="ace_storage ace_type">int</span>&nbsp;<span class="ace_identifier">main</span><span class="ace_paren ace_lparen">(</span><span class="ace_paren ace_rparen">)</span></div><div class="ace_line" style="height:17.27272605895996px"><span class="ace_paren ace_lparen">{</span></div><div class="ace_line" style="height:17.27272605895996px">&nbsp;&nbsp;<span class="ace_identifier">string</span>&nbsp;<span class="ace_identifier">s1</span>&nbsp;<span class="ace_keyword ace_operator">=</span>&nbsp;<span class="ace_string">"aabcc"</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height:17.27272605895996px">&nbsp;&nbsp;<span class="ace_identifier">string</span>&nbsp;<span class="ace_identifier">s2</span>&nbsp;<span class="ace_keyword ace_operator">=</span>&nbsp;<span class="ace_string">"adcaa"</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height:17.27272605895996px">&nbsp;</div><div class="ace_line" style="height:17.27272605895996px">&nbsp;&nbsp;<span class="ace_identifier">cout</span>&nbsp;<span class="ace_keyword ace_operator">&lt;&lt;</span>&nbsp;<span class="ace_identifier">commonCharacterCount</span><span class="ace_paren ace_lparen">(</span><span class="ace_identifier">s1</span><span class="ace_punctuation ace_operator">,</span>&nbsp;<span class="ace_identifier">s2</span><span class="ace_paren ace_rparen">)</span>&nbsp;<span class="ace_keyword ace_operator">&lt;&lt;</span>&nbsp;<span class="ace_identifier">endl</span><span class="ace_punctuation ace_operator">;</span></div><div class="ace_line" style="height:17.27272605895996px"></div><div class="ace_line" style="height:17.27272605895996px"></div></div><div class="ace_layer ace_marker-layer"></div><div class="ace_layer ace_cursor-layer"><div class="ace_cursor" style="left: 67.9773px; top: 17.2727px; width: 7.99716px; height: 17.2727px;"></div></div></div></div><div class="ace_scrollbar ace_scrollbar-v" style="width: 20px; bottom: 0px;"><div class="ace_scrollbar-inner" style="width: 20px; height: 639.091px;"></div></div><div class="ace_scrollbar ace_scrollbar-h" style="display: none; height: 20px; left: 49px; right: 15px;"><div class="ace_scrollbar-inner" style="height: 20px; width: 1233px;"></div></div><div style="height: auto; width: auto; top: -100px; left: -100px; visibility: hidden; position: fixed; white-space: pre; font-style: inherit; font-variant: inherit; font-weight: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: hidden;"><div style="height: auto; width: auto; top: -100px; left: -100px; visibility: hidden; position: fixed; white-space: pre; font-style: inherit; font-variant: inherit; font-weight: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;"></div><div style="height: auto; width: auto; top: -100px; left: -100px; visibility: hidden; position: fixed; white-space: pre; font-style: inherit; font-variant: inherit; font-stretch: inherit; font-size: inherit; line-height: inherit; font-family: inherit; overflow: visible;">X</div></div></div></div><div class="middle"><a href="http://cpp.sh/#" class="btnm" title="Run">Run</a><a href="http://cpp.sh/#" class="btn" title="Get URL">Get URL</a></div><div class="bottom"><ul class="switch"><li class="label">options</li><li class="label">compilation</li><li class="label selected">execution</li></ul><div class="sheet terminal" title="" style="display: none;"><ul><li class="optgroup" title="Select a C++ standard version">Standard<ul><li><input type="radio" name="dlct" value="cpp98" id="cpp98"><label for="cpp98">C++98</label></li><li><input type="radio" name="dlct" value="cpp11" id="cpp11"><label for="cpp11">C++11</label></li><li><input type="radio" name="dlct" value="cpp14" id="cpp14"><label for="cpp14">C++14</label></li></ul></li><li class="optgroup" title="Choose warning levels (multiple)">Warnings<ul><li><input type="checkbox" name="wrng" value="Wall" id="Wall"><label for="Wall">Many (-Wall)</label></li><li><input type="checkbox" name="wrng" value="Wextra" id="Wextra"><label for="Wextra">Extra (-Wextra)</label></li><li><input type="checkbox" name="wrng" value="Wpedantic" id="Wpedantic"><label for="Wpedantic">Pedantic (-Wpedantic)</label></li></ul></li><li class="optgroup" title="Optimization: Lower for faster compilation, higher for faster execution">Optimization level<ul><li><input type="radio" name="optm" value="O0" id="O0"><label for="O0">None (-O0)</label></li><li><input type="radio" name="optm" value="O1" id="O1"><label for="O1">Moderate (-O1)</label></li><li><input type="radio" name="optm" value="O2" id="O2"><label for="O2">Full (-O2)</label></li><li><input type="radio" name="optm" value="O3" id="O3"><label for="O3">Maximum (-O3)</label></li></ul></li><li class="optgroup" title="Choose a method to introduce input">Standard Input<ul><li><input type="radio" name="inpt" value="none" id="none"><label for="none">None</label></li><li><input type="radio" name="inpt" value="interactive" id="interactive"><label for="interactive">Interactive</label></li><li><input type="radio" name="inpt" value="text" id="text"><label for="text">Text:</label><textarea class="itext" name="stdin" cols="20" rows="4" maxlength="5000" disabled=""></textarea></li></ul></li></ul><div style="clear: both;"></div></div><div class="sheet terminal pre" title="" style="display: none;">Compilation successful </div><div class="sheet terminal selected" title="" tabindex="0" spellcheck="false" style="white-space: pre; word-wrap: break-word; display: block;"><div style="min-height: 125px;"><span>2
</span><span></span><span style="">&nbsp;</span></div><div style="background-color: rgb(221, 221, 221); color: rgb(102, 102, 102);">Exit code: 0 (normal program termination)</div></div></div></div>
</div>

<div id="bottom">
<a href="http://cpp.sh/v03/about.html">C++ Shell, 2014-2015</a>
</div>

<script src="./Searches_For_The_Same_Letters_Contained_In_Both_Strings_files/cpp.js.download"></script>
<script>
cpp.App(document.getElementById('compiler'),{"ajax":true}).edit({"source":"// Example program\r\n#include <iostream>\r\n#include <string>\r\n#include<set>\r\nusing namespace std;\r\n\r\nint commonCharacterCount(std::string s1, std::string s2) {\r\n\r\n  int n;\r\n  return n;\r\n}\r\n\r\nint main()\r\n{\r\n  string s1 = \"aabcc\";\r\n  string s2 = \"adcaa\";\r\n  std::size_t pos = s1.find(\"b\");      // position of \"b\" in s1\r\n  cout << pos << endl;\r\n\r\n}\r\n","autorun":"true"});

  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-35861002-6', 'cpp.sh');
  ga('send', 'pageview');

</script>


<span style="border-radius: 3px; text-indent: 20px; width: auto; padding: 0px 4px 0px 0px; text-align: center; font-style: normal; font-variant: normal; font-weight: bold; font-stretch: normal; font-size: 11px; line-height: 20px; font-family: &quot;Helvetica Neue&quot;, Helvetica, sans-serif; color: rgb(255, 255, 255); background: url(&quot;data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIGhlaWdodD0iMzBweCIgd2lkdGg9IjMwcHgiIHZpZXdCb3g9Ii0xIC0xIDMxIDMxIj48Zz48cGF0aCBkPSJNMjkuNDQ5LDE0LjY2MiBDMjkuNDQ5LDIyLjcyMiAyMi44NjgsMjkuMjU2IDE0Ljc1LDI5LjI1NiBDNi42MzIsMjkuMjU2IDAuMDUxLDIyLjcyMiAwLjA1MSwxNC42NjIgQzAuMDUxLDYuNjAxIDYuNjMyLDAuMDY3IDE0Ljc1LDAuMDY3IEMyMi44NjgsMC4wNjcgMjkuNDQ5LDYuNjAxIDI5LjQ0OSwxNC42NjIiIGZpbGw9IiNmZmYiIHN0cm9rZT0iI2ZmZiIgc3Ryb2tlLXdpZHRoPSIxIj48L3BhdGg+PHBhdGggZD0iTTE0LjczMywxLjY4NiBDNy41MTYsMS42ODYgMS42NjUsNy40OTUgMS42NjUsMTQuNjYyIEMxLjY2NSwyMC4xNTkgNS4xMDksMjQuODU0IDkuOTcsMjYuNzQ0IEM5Ljg1NiwyNS43MTggOS43NTMsMjQuMTQzIDEwLjAxNiwyMy4wMjIgQzEwLjI1MywyMi4wMSAxMS41NDgsMTYuNTcyIDExLjU0OCwxNi41NzIgQzExLjU0OCwxNi41NzIgMTEuMTU3LDE1Ljc5NSAxMS4xNTcsMTQuNjQ2IEMxMS4xNTcsMTIuODQyIDEyLjIxMSwxMS40OTUgMTMuNTIyLDExLjQ5NSBDMTQuNjM3LDExLjQ5NSAxNS4xNzUsMTIuMzI2IDE1LjE3NSwxMy4zMjMgQzE1LjE3NSwxNC40MzYgMTQuNDYyLDE2LjEgMTQuMDkzLDE3LjY0MyBDMTMuNzg1LDE4LjkzNSAxNC43NDUsMTkuOTg4IDE2LjAyOCwxOS45ODggQzE4LjM1MSwxOS45ODggMjAuMTM2LDE3LjU1NiAyMC4xMzYsMTQuMDQ2IEMyMC4xMzYsMTAuOTM5IDE3Ljg4OCw4Ljc2NyAxNC42NzgsOC43NjcgQzEwLjk1OSw4Ljc2NyA4Ljc3NywxMS41MzYgOC43NzcsMTQuMzk4IEM4Ljc3NywxNS41MTMgOS4yMSwxNi43MDkgOS43NDksMTcuMzU5IEM5Ljg1NiwxNy40ODggOS44NzIsMTcuNiA5Ljg0LDE3LjczMSBDOS43NDEsMTguMTQxIDkuNTIsMTkuMDIzIDkuNDc3LDE5LjIwMyBDOS40MiwxOS40NCA5LjI4OCwxOS40OTEgOS4wNCwxOS4zNzYgQzcuNDA4LDE4LjYyMiA2LjM4NywxNi4yNTIgNi4zODcsMTQuMzQ5IEM2LjM4NywxMC4yNTYgOS4zODMsNi40OTcgMTUuMDIyLDYuNDk3IEMxOS41NTUsNi40OTcgMjMuMDc4LDkuNzA1IDIzLjA3OCwxMy45OTEgQzIzLjA3OCwxOC40NjMgMjAuMjM5LDIyLjA2MiAxNi4yOTcsMjIuMDYyIEMxNC45NzMsMjIuMDYyIDEzLjcyOCwyMS4zNzkgMTMuMzAyLDIwLjU3MiBDMTMuMzAyLDIwLjU3MiAxMi42NDcsMjMuMDUgMTIuNDg4LDIzLjY1NyBDMTIuMTkzLDI0Ljc4NCAxMS4zOTYsMjYuMTk2IDEwLjg2MywyNy4wNTggQzEyLjA4NiwyNy40MzQgMTMuMzg2LDI3LjYzNyAxNC43MzMsMjcuNjM3IEMyMS45NSwyNy42MzcgMjcuODAxLDIxLjgyOCAyNy44MDEsMTQuNjYyIEMyNy44MDEsNy40OTUgMjEuOTUsMS42ODYgMTQuNzMzLDEuNjg2IiBmaWxsPSIjYmQwODFjIj48L3BhdGg+PC9nPjwvc3ZnPg==&quot;) 3px 50% / 14px 14px no-repeat rgb(189, 8, 28); position: absolute; opacity: 1; z-index: 8675309; display: none; cursor: pointer; border: none; -webkit-font-smoothing: antialiased;">Save</span><span style="width: 24px; height: 24px; background: url(&quot;data:image/svg+xml;base64,PD94bWwgdmVyc2lvbj0iMS4wIiA/Pjxzdmcgd2lkdGg9IjI0cHgiIGhlaWdodD0iMjRweCIgdmlld0JveD0iMCAwIDI0IDI0IiB2ZXJzaW9uPSIxLjEiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyIgeG1sbnM6eGxpbms9Imh0dHA6Ly93d3cudzMub3JnLzE5OTkveGxpbmsiPjxkZWZzPjxtYXNrIGlkPSJtIj48cmVjdCBmaWxsPSIjZmZmIiB4PSIwIiB5PSIwIiB3aWR0aD0iMjQiIGhlaWdodD0iMjQiIHJ4PSI2IiByeT0iNiIvPjxyZWN0IGZpbGw9IiMwMDAiIHg9IjUiIHk9IjUiIHdpZHRoPSIxNCIgaGVpZ2h0PSIxNCIgcng9IjEiIHJ5PSIxIi8+PHJlY3QgZmlsbD0iIzAwMCIgeD0iMTAiIHk9IjAiIHdpZHRoPSI0IiBoZWlnaHQ9IjI0Ii8+PHJlY3QgZmlsbD0iIzAwMCIgeD0iMCIgeT0iMTAiIHdpZHRoPSIyNCIgaGVpZ2h0PSI0Ii8+PC9tYXNrPjwvZGVmcz48cmVjdCB4PSIwIiB5PSIwIiB3aWR0aD0iMjQiIGhlaWdodD0iMjQiIGZpbGw9IiNmZmYiIG1hc2s9InVybCgjbSkiLz48L3N2Zz4=&quot;) 50% 50% / 14px 14px no-repeat rgba(0, 0, 0, 0.4); position: absolute; opacity: 1; z-index: 8675309; display: none; cursor: pointer; border: none; border-radius: 12px;"></span></body></html>