module.exports = function(grunt) {
	grunt.loadNpmTasks('grunt-contrib-watch');
	grunt.loadNpmTasks('grunt-contrib-less');
	grunt.initConfig({
		watch: {
			less: {
				files: ['less/*.less', 'less/*/*.less'],
				tasks: ['less:development']
			}
		},
		less: {
			development: {
				files: {
					'css/style.css': 'less/style.less'
				}
			}
		}
	});
	grunt.registerTask('default', ['watch']);
};
